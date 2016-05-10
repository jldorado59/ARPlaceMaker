using UnityEngine;
using System.Collections;

public class MapController : MonoBehaviour {
    public SensorsController Sensors;
    protected GoogleMap m_Map;

    protected double m_PreviousLat;
    protected double m_PreviousLon;

    // Use this for initialization
	void Start () {
        m_Map = this.GetComponent<GoogleMap>();

	}
	
	// Update is called once per frame
	void Update () {        
        if (m_Map.centerLocation.latitude == 0 && m_Map.centerLocation.longitude == 0)
        {            
            UpdatePosition();
        }

        if (Sensors.Latitude != m_PreviousLat || Sensors.Longitude != m_PreviousLon)
            UpdatePosition();
	}

    void UpdatePosition()
    {
        m_Map.centerLocation = new GoogleMapLocation() { latitude = (float) Sensors.Latitude, longitude = (float) Sensors.Longitude, address = string.Empty };

        m_PreviousLat = Sensors.Latitude;
        m_PreviousLon = Sensors.Longitude;

        m_Map.UpdateMarker(0, "Yo", GoogleMapColor.red, (float) Sensors.Latitude, (float) Sensors.Longitude);

        m_Map.Refresh();
    }

    public void SetPosition(int index, string nombre, float latitude, float longitude)
    {
        m_Map.UpdateMarker(index, nombre, GoogleMapColor.green, latitude, longitude);
    }

    public void Refresh()
    {
        m_Map.Refresh();
    }
}
