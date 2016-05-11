using UnityEngine;
using UnityEngine.UI;
using System.IO;
using System.Collections;

public class VerEscenasController : MonoBehaviour
{

    public ScenePersistence Persistencia;
    public Image Imagen;
    public Image Mapa;
    public Text Nombre;
    public Text Title;
    public Text Posicion;


    public System.Action<int> OnCargarEscena;
    protected Texture2D m_Texture;
    protected int m_Indice;

    // Use this for initialization
    void Start()
    {
        Imagen.enabled = true;
        Mapa.enabled = false;

        m_Texture = new Texture2D(Screen.width, Screen.height, TextureFormat.RGB24, false);
    }
	
    // Update is called once per frame
    void Update()
    {
	
    }

    public void DisableButtons()
    {
        transform.FindChild("Botones").localScale = Vector3.zero;
    }

    public void EnableButtons()
    {
        transform.FindChild("Botones").localScale = Vector3.one;
    }

    public void CargarEscena(Escena escena)
    {
        Title.text = "Escena guardada";
        Nombre.text = escena.Nombre + " " + escena.Fecha.ToShortDateString();
        Posicion.text = escena.Latitude.ToString() + "," + escena.Longitude.ToString();

        WWW www = new WWW("file://c:" + Application.persistentDataPath + "/" + escena.Nombre + ".png"); //rendering texture

        while (!www.isDone)
        {
            Debug.Log("Cargando imagen");        
        }// <- the actual load of file

        www.LoadImageIntoTexture(m_Texture);
        Imagen.sprite = Sprite.Create(m_Texture, new Rect(0, 0, Screen.width, Screen.height), new Vector2(0.5f, 0.5f));

        //byte[] bytes = File.ReadAllBytes(Application.persistentDataPath + "/" + escena.Nombre + ".png");
        //Texture2D texture = new Texture2D(Screen.width, Screen.height);
        //bytes = texture.EncodeToPNG();

        //texture.LoadImage(bytes);

        //this.StartCoroutine(LoadImageCoroutine(escena));

        //Imagen.sprite = Sprite.Create(texture, new Rect(0, 0, Screen.width, Screen.height), new Vector2(0.5f, 0.5f));


        //Mapa.GetComponent<MapController>().SetPosition(1, escena.Nombre, escena.Latitude, escena.Longitude);
        //Mapa.GetComponent<MapController>().Refresh();
    }

    /*IEnumerator LoadImageCoroutine(Escena escena)
    {
     
    }*/

    public void CargarEscena(int indice)
    {
        Escena escena = Persistencia.LeerEscenea(indice);
        m_Indice = indice;

        CargarEscena(escena);
    }

    public void VerIzquierda()
    {
        if (m_Indice > 1)
        {
            m_Indice--;

            Escena escena = Persistencia.LeerEscenea(m_Indice);
            this.CargarEscena(escena);
        }
    }

    public void VerDerecha()
    {
        if (m_Indice < Persistencia.GetIndice())
        {
            m_Indice++;

            Escena escena = Persistencia.LeerEscenea(m_Indice);
            this.CargarEscena(escena);
        }
    }

    public void VerMapa()
    {
        Mapa.enabled = true;
        Imagen.enabled = false;
    }

    public void VerImagen()
    {
        Mapa.enabled = false;
        Imagen.enabled = true;
    }

    public void Cargar()
    {
        OnCargarEscena(m_Indice);
    }
}

