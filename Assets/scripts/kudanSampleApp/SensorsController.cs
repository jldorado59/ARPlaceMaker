using UnityEngine;
using System;
using System.Collections;
using UnityEngine.UI;

public class SensorsController : MonoBehaviour {  

    public Text Accel;
    public Text Compass;
    public Text GPS;
    public double Latitude;
    public double Longitude;
    public Vector2 CameraFOV;
    public float FocalLenght;

    public Action OnReady;

	// Use this for initialization
	void Start () {
	    
        Input.location.Start();
        Input.compass.enabled = true;

        this.StartCoroutine(GetGPS());
	}
	
	// Update is called once per frame
	void Update () {
        if(Accel != null)	
            Accel.text = "x:" + Input.acceleration.x.ToString() + ",y:" + Input.acceleration.y.ToString() + ",z:" + Input.acceleration.z.ToString();
        if(Compass != null)
            Compass.text = "x:" + Input.compass.rawVector.x.ToString() + ",y:" + Input.compass.rawVector.y.ToString() + ",z" + Input.compass.rawVector.z.ToString() + ",polo mágnetico:" + Input.compass.magneticHeading.ToString();
        if(GPS != null)
            GPS.text = "latitude:" + Input.location.lastData.latitude + ",longitude:" + Input.location.lastData.longitude;       

        if (Input.location.status == LocationServiceStatus.Running)
        {
            Latitude = Input.location.lastData.latitude;
            Longitude = Input.location.lastData.longitude;
        }
 	}


    IEnumerator GetGPS()
    {
        // First, check if user has location service enabled
        if (!Input.location.isEnabledByUser)
            yield break;

        // Wait until service initializes
        int maxWait = 20;
        while (Input.location.status == LocationServiceStatus.Initializing && maxWait > 0)
        {
            yield return new WaitForSeconds(1);
            maxWait--;
        }

        // Service didn't initialize in 20 seconds
        if (maxWait < 1)
        {
            print("Timed out");
            yield break;
        }

        // Connection has failed
        if (Input.location.status == LocationServiceStatus.Failed)
        {
            print("Unable to determine device location");
            yield break;
        }
        else
        {
            // Access granted and location value could be retrieved
            print("Location: " + Input.location.lastData.latitude + " " + Input.location.lastData.longitude + " " + Input.location.lastData.altitude + " " + Input.location.lastData.horizontalAccuracy + " " + Input.location.lastData.timestamp);
        }

        // Stop service if there is no need to query location updates continuously
       // Input.location.Stop();

        if(OnReady != null)
            OnReady();
    }  
}

