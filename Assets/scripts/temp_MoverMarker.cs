using UnityEngine;
using System.Collections;

public class temp_MoverMarker : MonoBehaviour {
	private Vector3 screenPoint;
	private Vector3 offset;
	private float posicionInicialenX;
	private float posicionInicialenY;
	private float posicionInicialenZ;
	public GameObject elMarker;

	void Start () {
	}


	void Update () {


	}




	void OnMouseDown()
	{
		screenPoint = Camera.main.WorldToScreenPoint(transform.position);
		posicionInicialenX = elMarker.transform.position.x ;
		posicionInicialenY = elMarker.transform.position.y ;
		posicionInicialenZ = elMarker.transform.position.z ;

	}

	void OnMouseDrag()
	{

		offset =  Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,screenPoint.z));
		Vector3 curScreenPoint = new Vector3(offset.x, posicionInicialenY, (posicionInicialenZ+offset.y)*2);
		//Vector3 curScreenPoint = new Vector3(posicionInicialenX, posicionInicialenY, posicionInicialenZ+offset.y);
		elMarker.transform.position = curScreenPoint;

	}
}
