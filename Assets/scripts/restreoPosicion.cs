using UnityEngine;
using System.Collections;

public class restreoPosicion : MonoBehaviour {
	public GameObject esteObjeto;
	private Vector3 thePosition;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		Debug.Log ("la posicion de "+ esteObjeto.name + " es: " + esteObjeto.transform.position);
		thePosition = transform.TransformPoint(esteObjeto.transform.position);
		Debug.Log ("la posicion global de "+ esteObjeto.name + " es: " + thePosition);
	
	}
}
