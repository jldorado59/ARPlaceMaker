using UnityEngine;
using System.Collections;

public class CrearObjetos : MonoBehaviour {
	public GameObject laEscena;
	public GameObject piso;

	public void crear(GameObject nombreObjeto)
	{	
		Vector3 posicionPiso = piso.transform.position;		
		Instantiate(nombreObjeto, posicionPiso, Quaternion.identity);

	}

	/*
	void Start()
	{

	}
	
	// Update is called once per frame
	void Update () {
	
	}*/
}
