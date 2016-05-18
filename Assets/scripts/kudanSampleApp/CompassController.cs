using UnityEngine;
using System.Collections;

public class CompassController : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {        

        //float xrot = Mathf.Atan2 (Input.acceleration.z, Input.acceleration.y);
        //var yzmag = Mathf.Sqrt (Mathf.Pow (Input.acceleration.y, 2) + Mathf.Pow (Input.acceleration.z, 2));
        //var zrot = Mathf.Atan2 (Input.acceleration.x, yzmag);

        //float xangle = xrot * Mathf.Rad2Deg + 180;
        //var zangle = -zrot * Mathf.Rad2Deg;

        //transform.eulerAngles = new Vector3(xangle, Input.compass.trueHeading, zangle);    

        Compass();
	}

    void Compass()
    {
        float xrot = Mathf.Atan2 (Input.acceleration.z, Input.acceleration.y);
        float yzmag = Mathf.Sqrt (Mathf.Pow (Input.acceleration.y, 2) + Mathf.Pow (Input.acceleration.z, 2));
        float zrot = Mathf.Atan2 (Input.acceleration.x, yzmag);

        var xangle = xrot * (180 / Mathf.PI) + 90;
        var zangle = -zrot * (180 / Mathf.PI);
		this.transform.eulerAngles = new Vector3 (xangle, 0, zangle - Input.compass.trueHeading);
        //transform.FindChild("MainCamera").FindChild("Compass").eulerAngles = new Vector3 (xangle, 0, zangle - Input.compass.trueHeading);
    }
}
