using UnityEngine;
using System.Collections;

public class PosicionarConRespectoApiso : MonoBehaviour {
	public GameObject piso;
	private Vector3 posicionPiso;


	// Use this for initialization
	void Start () {
		posicionPiso = piso.transform.position;
		this.gameObject.transform.parent.parent.position = posicionPiso;
		

	
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
