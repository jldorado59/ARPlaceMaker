using UnityEngine;
using System;
using System.Collections;
using System.IO;
using System.Xml.Serialization;
using System.Xml;

public class ScenePersistence : MonoBehaviour {

	public ObjectManager Manager;
    public SensorsController Sensors;
    public bool ResetData;

	// Use this for initialization
	void Start () {
        if (ResetData)
            PlayerPrefs.DeleteAll();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public Escena Guardar()
	{
        int indice = GetIndice();
        string name = string.Format("Escena{0}", indice + 1);

        Escena escena = new Escena () { Nombre = name, Fecha = DateTime.Now, Latitude = (float) Sensors.Latitude, Longitude = (float) Sensors.Longitude };
		escena.Objetos = new Objeto[Manager.misObjectos.Count];

		for(int i=0; i < Manager.misObjectos.Count; i++)
		{
			GameObject obj = Manager.misObjectos [i];
			escena.Objetos [i] = new Objeto (){ Name = obj.name, Position = obj.transform.localPosition, Rotation = obj.transform.localRotation };
		}

		StringWriter str = new StringWriter ();
		XmlSerializer serializer = new XmlSerializer (typeof(Escena));
		serializer.Serialize (str, escena);

        PlayerPrefs.SetString (name, str.ToString ());
		PlayerPrefs.Save ();

        Application.CaptureScreenshot(Application.persistentDataPath + "/" + name + ".png");

        SetIndice(indice + 1);

        return escena;
	}

    public Escena LeerEscenea(int indice)
	{
        string name = string.Format("Escena{0}", indice);
        StringReader str = new StringReader (PlayerPrefs.GetString(name));
		XmlSerializer serializer = new XmlSerializer (typeof(Escena));
		Escena escena = serializer.Deserialize (str) as Escena;

		return escena;
	}	

    public int GetIndice()
    {
        int indice = 0;

        if (PlayerPrefs.HasKey("Indice"))
            indice = PlayerPrefs.GetInt("Indice");

        return indice;
    }

    public void SetIndice(int indice)
    {
        PlayerPrefs.SetInt("Indice", indice);
        PlayerPrefs.Save();
    }
}


[Serializable]
public class Escena
{
	[SerializeField]
	public Objeto[] Objetos;

    [SerializeField]
    public string Nombre;

    [SerializeField]
    public DateTime Fecha;

    [SerializeField]
    public float Latitude;

    [SerializeField]
    public float Longitude;
}

[Serializable]
public class Objeto
{
	[SerializeField]
	public string Name;

	[SerializeField]
	public Vector3 Position;

	[SerializeField]
	public Quaternion Rotation;
}

