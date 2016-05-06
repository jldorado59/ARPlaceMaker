using UnityEngine;
using System.Collections;

public class esconderMostrarGizmo : MonoBehaviour {
	public GameObject gizmo; 
	// Use this for initialization
	void Start () {
		gizmo.SetActive (false);
	
	}
	
	// Update is called once per frame
	void Update () {
		
	


	}

	void OnMouseDown()
	{
		gizmo.SetActive (true);



	}
}
