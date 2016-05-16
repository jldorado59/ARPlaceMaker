using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

namespace Kudan.AR.Samples
{
    public class SampleApp : MonoBehaviour
    {
        public KudanTracker _kudanTracker;
        public TrackingMethodMarkerless _markerlessTracking;
        public ObjectManager AdminObjetos;
        public ScenePersistence Persistencia;
        public VerEscenasController VerEscena;
        public GameObject elMarcador;
        public GameObject Caneca;
        public GameObject Banca;
        public GameObject Policia;
        public GameObject Lampara;
        public GameObject Juego;
        public GameObject Arbol;

        public void Start()
        {            
            GameObject.Find("Mapa").GetComponent<Image>().enabled = false;

            VerEscena.gameObject.SetActive(false);
            VerEscena.OnCargarEscena += CargarEscena;

            if (Parameters.Modo == "Crear")
            {
                GameObject.Find("PanelObjetos").transform.localScale = Vector3.one;
                GameObject.Find("BtnSubir").transform.localScale = Vector3.one;
                GameObject.Find("BtnCargar").transform.localScale = Vector3.zero;
                GameObject.Find("BtnVotar").transform.localScale = Vector3.zero;
            }
            else
            {
                GameObject.Find("PanelObjetos").transform.localScale = Vector3.zero;
                GameObject.Find("BtnSubir").transform.localScale = Vector3.zero;
                GameObject.Find("BtnCargar").transform.localScale = Vector3.one;
                GameObject.Find("BtnVotar").transform.localScale = Vector3.one;
            }

            #if(UNITY_EDITOR_WIN)
                Camera.main.enabled = false;
                GameObject.Find("Camera").SetActive(true);
            #else
                Camera.main.enabled = true;
                GameObject.Find("Camera").SetActive(false);                
            #endif          
        }

        public void Update()
        {
    
        }

        public void ponerCaneca()
        {
            Almacenar(Caneca);
        }

        public void ponerBanca()
        {
            Almacenar(Banca);
        }

        public void ponerPolicia()
        {
            Almacenar(Policia);
        }

        public void ponerLampara()
        {
            Almacenar(Lampara);
        }

        public void ponerJuego()
        {
            Almacenar(Juego);
        }

        public void ponerArbol()
        {
            Almacenar(Arbol);
        }

        public GameObject Almacenar(GameObject prefab)
        {
            GameObject obj = GameObject.Instantiate(prefab, elMarcador.transform.position, elMarcador.transform.rotation) as GameObject;
            obj.transform.parent = elMarcador.transform;

            AdminObjetos.AdicionarObjeto(obj);

            return obj;
        }

        public void CargarEscena(int indice)
        {
            Escena escena = Persistencia.LeerEscenea(indice);

            foreach (Objeto obj in escena.Objetos)
            {
                GameObject miObject = null;

                switch (obj.Name.Replace("(Clone)", string.Empty))
                {
                    case "Caneca":
                        miObject = Almacenar(Caneca);
                        break;
                    case "Banca":
                        miObject = Almacenar(Banca);
                        break;
                    case "Policia":
                        miObject = Almacenar(Policia);
                        break;
                    case "Arbol":
                        miObject = Almacenar(Arbol);
                        break;
                    case "Lampara":
                        miObject = Almacenar(Lampara);
                        break;
                    case "Juego":
                        miObject = Almacenar(Juego);
                        break;
                }

                miObject.transform.localPosition = obj.Position;
                miObject.transform.localRotation = obj.Rotation;
            }

            GameObject.Find("PanelObjetos").transform.localScale = Vector3.one;
            GameObject.Find("PanelOptions").transform.localScale = Vector3.one;
            VerEscena.gameObject.SetActive(false);
        }

        public void GuardarEscena()
        {
            this.StartCoroutine(GuardarCoroutine());
        }

        public IEnumerator GuardarCoroutine()
        {
            Escena escena = Persistencia.Guardar();
            GameObject.Find("PanelObjetos").transform.localScale = Vector3.zero;
            GameObject.Find("PanelOptions").transform.localScale = Vector3.zero;

            yield return new WaitForSeconds(1.0f);

            VerEscena.DisableButtons();
            VerEscena.gameObject.SetActive(true);
            VerEscena.CargarEscena(escena);
        }

        public void VerEscenas()
        {
            int indice = Persistencia.GetIndice();

            if (indice != 0)
            {
                GameObject.Find("PanelObjetos").transform.localScale = Vector3.zero;
                GameObject.Find("PanelOptions").transform.localScale = Vector3.zero;

                VerEscena.EnableButtons();
                VerEscena.gameObject.SetActive(true);
                VerEscena.CargarEscena(indice);
            }
        }

        public void Cerrar()
        {
            GameObject.Find("PanelObjetos").transform.localScale = Vector3.one;
            GameObject.Find("PanelOptions").transform.localScale = Vector3.one;
               
            VerEscena.gameObject.SetActive(false);
        }

        public void MostrarMapa()
        {
            GameObject.Find("Mapa").GetComponent<Image>().enabled = !GameObject.Find("Mapa").GetComponent<Image>().enabled;
        }

        public void Back()
        {
            SceneManager.LoadScene("Home", LoadSceneMode.Single);
        }

        public void Votar()
        {
            Application.OpenURL("https://twitter.com/MiEspacioPub");
        }

        public void StartClicked()
        {
            Vector3 floorPosition;
            Quaternion floorOrientation;

            _kudanTracker.FloorPlaceGetPose(out floorPosition, out floorOrientation);
            _kudanTracker.ArbiTrackStart(floorPosition, floorOrientation);
        }
    }
}