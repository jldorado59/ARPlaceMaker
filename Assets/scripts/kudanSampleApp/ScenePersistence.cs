using UnityEngine;
using System;
using System.Collections;
using System.IO;
using System.Xml.Serialization;
using System.Xml;

public class ScenePersistence : MonoBehaviour {

	public ObjectManager Manager;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void Guardar()
	{
		Escena escena = new Escena ();
		escena.Objetos = new Objeto[Manager.misObjectos.Count];

		for(int i=0; i < Manager.misObjectos.Count; i++)
		{
			GameObject obj = Manager.misObjectos [i];
			escena.Objetos [i] = new Objeto (){ Name = obj.name, Position = obj.transform.localPosition, Rotation = obj.transform.localRotation };
		}

		StringWriter str = new StringWriter ();
		XmlSerializer serializer = new XmlSerializer (typeof(Escena));
		serializer.Serialize (str, escena);

		Debug.Log (str.ToString());
		PlayerPrefs.SetString ("Escena", str.ToString ());
		PlayerPrefs.Save ();

		Application.CaptureScreenshot("Screenshot.png");
		Debug.Log ("Saved screenshot to " + Application.persistentDataPath);
	}

	public Escena LeerEscenea()
	{
		StringReader str = new StringReader (PlayerPrefs.GetString("Escena"));
		XmlSerializer serializer = new XmlSerializer (typeof(Escena));
		Escena escena = serializer.Deserialize (str) as Escena;

		return escena;
	}		
}


[Serializable]
public class Escena
{
	[SerializeField]
	public Objeto[] Objetos;
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

