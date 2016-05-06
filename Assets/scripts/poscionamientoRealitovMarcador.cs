using UnityEngine;
using System.Collections;

public class poscionamientoRealitovMarcador : MonoBehaviour {
	public GameObject elmarcadorDinamico;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		this.gameObject.transform.position = elmarcadorDinamico.transform.position;
		this.gameObject.transform.rotation = elmarcadorDinamico.transform.rotation;
	
	}
}
