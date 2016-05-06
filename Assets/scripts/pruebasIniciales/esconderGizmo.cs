using UnityEngine;
using System.Collections;

public class esconderGizmo : MonoBehaviour {
	public GameObject gizmo; 
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {


	}
	void OnMouseDown()
	{
		gizmo.SetActive (false);



	}
}
