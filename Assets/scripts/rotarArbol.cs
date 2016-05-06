using UnityEngine;
using System.Collections;

public class rotarArbol : MonoBehaviour {

	public float velocidadRotacion = 4.0F;


	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
		

	
	}

	void OnMouseDrag()
	{
		float h = - velocidadRotacion * Input.GetAxis("Mouse X");

		transform.parent.Rotate(0, h, 0);

		//transform.Rotate (0, 0, -h);
		//int algo = transform.parent.childCount;
		//Debug.Log (algo);
		//transform.parent.GetChild(1).Rotate (0, 0, -h);
		//transform.parent.GetChild(2).Rotate (0, -h, 0);
		//transform.parent.GetChild(3).Rotate (0, -h, 0);
		//transform.parent.GetChild(4).Rotate (0,-h,0);
		//transform.parent.GetChild(5).Rotate (0,0,-h);

	}
}
