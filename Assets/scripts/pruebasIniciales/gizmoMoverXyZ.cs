using UnityEngine;
using System.Collections;

public class gizmoMoverXyZ : MonoBehaviour {
	
	private Vector3 screenPoint;
	private Vector3 offset;
	private float posicionInicialenX;
	private float posicionInicialenY;
	private float posicionInicialenZ;


	void Start () {
		
		
	}


	void Update () {
		
	
	}




	void OnMouseDown()
	{
		screenPoint = Camera.main.WorldToScreenPoint(transform.position);
		posicionInicialenX = transform.parent.parent.position.x ;
		posicionInicialenY = transform.parent.parent.position.y ;
		posicionInicialenZ = transform.parent.parent.position.z ;

	}

	void OnMouseDrag()
	{
		
		offset =  Camera.main.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y,screenPoint.z));
		Vector3 curScreenPoint = new Vector3(offset.x, posicionInicialenY, (posicionInicialenZ+offset.y)*2);
		//Vector3 curScreenPoint = new Vector3(posicionInicialenX, posicionInicialenY, posicionInicialenZ+offset.y);
		transform.parent.parent.position = curScreenPoint;

	}
	void OnMouseUp()
	{
		//Debug.Log (transform.parent.parent.position);
		posicionInicialenX = transform.parent.parent.position.x ;
		posicionInicialenY = transform.parent.parent.position.y ;
		posicionInicialenZ = transform.parent.parent.position.z ;
	}


}
