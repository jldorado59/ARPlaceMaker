using UnityEngine;
using UnityEngine.UI;
using System;
using System.Collections;

public class GeoPointsController : MonoBehaviour {

    const int EARTH_RADIO = 6371000; // meters

    //public Text[] TextPoints;
    public SensorsController Sensors;
    public GeoPoint[] POIS;
    protected GeoPoint m_Location;

    public GameObject PointPrefab;
    public GameObject User;
    protected bool m_IsEnabled;

	
    // Use this for initialization
	void Start () {

        /*POIS[0] = new GeoPoint("Mario Laserna", 4.602979, -74.065299);
        POIS[1] = new GeoPoint("Aulas", 4.602826, -74.066012);
        POIS[2] = new GeoPoint("Doña blanca", 4.603314, -74.066052);*/

        m_Location = new GeoPoint("watashitashi", 0, 0);

        Sensors.OnReady += OnReady;
	}
	
	// Update is called once per frame
	void Update () {

        if (m_IsEnabled)
        {
            m_Location.Latitude = Sensors.Latitude;
            m_Location.Longitude = Sensors.Longitude;

            User.transform.position = m_Location.GetNormalPos();
        }
	}

    public void OnReady()
    {
        NormalizePositions();

        for (int i = 0; i < POIS.Length; i++)
        {
            GameObject point = GameObject.Instantiate(PointPrefab, POIS[i].GetNormalPos(), Quaternion.identity) as GameObject;
            point.GetComponent<MeshRenderer>().material.color = POIS[i].Color;
        }  

        m_IsEnabled = true;
    }


    private GeoPoint ComputeBaricenter()
    {
        double SumLat = 0;
        double SumLon = 0;

        for (int i = 0; i < POIS.Length; i++)
        {
            SumLat += POIS[i].Latitude;
            SumLon += POIS[i].Longitude;
        }

        GeoPoint barycenter = new GeoPoint("center", SumLat / POIS.Length, SumLon / POIS.Length);
        return barycenter;
    }


    private void NormalizePositions()
    {
        GeoPoint barycenter = ComputeBaricenter();

        for (int i = 0; i < POIS.Length; i++)
            POIS[i].SetCenter(barycenter);

        m_Location.SetCenter(barycenter);
    }

    public double GestDistance(int index)
    {
        return CalculateDistance(m_Location, POIS[index]);
    }

    public double GetBearing(int index)
    {
        return CalculateBearing(m_Location, POIS[index]);
    }

    public double CalculateDistance(GeoPoint location, GeoPoint poi)
    {
        double deltaLat = (poi.Latitude - location.Latitude) * Mathf.Deg2Rad;
        double deltaLon = (poi.Longitude - location.Longitude) * Mathf.Deg2Rad;

        double angle = Math.Sin(location.Latitude) * Math.Sin(poi.Latitude) + Math.Cos(location.Latitude) * Math.Cos(poi.Latitude) * Math.Cos(deltaLon);
        double distance = Math.Acos(angle) * EARTH_RADIO;

        distance = 2 * Math.Asin(Math.Sqrt(Math.Pow(Math.Sin(deltaLat/ 2), 2) + Math.Cos(location.Latitude * Mathf.Deg2Rad) * Math.Cos(poi.Latitude * Mathf.Deg2Rad)*Math.Pow(Math.Sin(deltaLon / 2),2)));
        distance = distance * EARTH_RADIO;

        return distance;
    }

    public double CalculateBearing(GeoPoint location, GeoPoint poi)
    {
        double deltaLat = (poi.Latitude - location.Latitude) * Mathf.Deg2Rad;
        double deltaLon = (poi.Longitude - location.Longitude) * Mathf.Deg2Rad;

        double bearing = Math.Atan2(Math.Sin(deltaLon) * Math.Cos(poi.Latitude * Mathf.Deg2Rad), Math.Cos(poi.Latitude * Mathf.Deg2Rad) * Math.Sin(location.Latitude * Mathf.Deg2Rad) - Math.Sin(location.Latitude * Mathf.Deg2Rad) * Math.Cos(poi.Latitude * Mathf.Deg2Rad) * Math.Cos(deltaLon));
        bearing = (bearing + 360) % 360;

        return bearing;
    }

}
