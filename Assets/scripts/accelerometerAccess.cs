using UnityEngine;
using System.Collections;

public class accelerometerAccess : MonoBehaviour {
	Vector3 lectruaacelerometro;
	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () 
	{
		//lectruaacelerometro.x = Input.gyro.x;
		//lectruaacelerometro.y = Input.gyro.y;
		//lectruaacelerometro.z = Input.gyro.z;
		//transform.position= lectruaacelerometro ;
		transform.rotation = Input.gyro.attitude;
	}
}
