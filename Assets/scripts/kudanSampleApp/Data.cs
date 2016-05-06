using UnityEngine;
using UnityEngine.UI;
using System;

[Serializable]
public class GeoPoint
{
    const int SCALE_FACTOR = 1000;

    public string Name;
    public double Latitude;
    public double Longitude;
    public Color Color;

    protected Vector3 m_NormalPos;
    protected GeoPoint m_Center;

    public GeoPoint (string name, double lat, double lon)
    {
        Name = name;
        Latitude = lat;
        Longitude = lon;
    }     

    public void SetCenter(GeoPoint center)
    {
        m_Center = center;
    }

    public Vector3 GetNormalPos()
    {
        double dx = Latitude - m_Center.Latitude;
        double dz = Longitude - m_Center.Longitude;

        return new Vector3((float) dx * SCALE_FACTOR, 0, (float) dz * SCALE_FACTOR);
    }
}