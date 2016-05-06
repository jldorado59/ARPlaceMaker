using UnityEngine;
using System.Collections;

public class moverEnY : MonoBehaviour {

	private Vector3 screenPoint;
	private Vector3 offset;



	void Start () {
	}


	void Update () {

	}



	void OnMouseDown()
	{
		screenPoint = Camera.main.WorldToScreenPoint(transform.position);
		offset =  transform.parent.parent.position - Camera.main.ScreenToWorldPoint(new Vector3(0,Input.mousePosition.y, screenPoint.z));



	}

	void OnMouseDrag()
	{
		Vector3 curScreenPoint = new Vector3(0,Input.mousePosition.y, screenPoint.z);
		Vector3 curPosition = Camera.main.ScreenToWorldPoint(curScreenPoint) + offset;
		transform.parent.parent.position = curPosition;

	}
}
