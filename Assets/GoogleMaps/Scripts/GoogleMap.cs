using UnityEngine;
using System.Collections;
using UnityEngine.UI;

public class GoogleMap : MonoBehaviour
{
	//un cambio
    public enum MapType
    {
        RoadMap,
        Satellite,
        Terrain,
        Hybrid
    }

    public bool loadOnStart = true;
    public bool autoLocateCenter = true;
    public GoogleMapLocation centerLocation;
    public int zoom = 13;
    public MapType mapType;
    public int size = 512;
    public bool doubleResolution = false;
    public GoogleMapMarker[] markers;
    public GoogleMapPath[] paths;

    protected Texture2D m_Texture;
    protected int m_MarkerIndex;

    void Start()
    {
        m_Texture = new Texture2D(size, size);
            
        if (loadOnStart)
            Refresh();	
    }

    public void Refresh()
    {
        if (autoLocateCenter && (markers.Length == 0 && paths.Length == 0))
        {
            Debug.LogError("Auto Center will only work if paths or markers are used.");	
        }
        StartCoroutine(_Refresh());
    }

    IEnumerator _Refresh()
    {
        var url = "http://maps.googleapis.com/maps/api/staticmap";
        var qs = "";
        if (!autoLocateCenter)
        {
            if (centerLocation.address != "")
                qs += "center=" + (centerLocation.address);
            else
                qs += "center=" + WWW.UnEscapeURL(string.Format("{0},{1}", centerLocation.latitude, centerLocation.longitude));
		
            qs += "&zoom=" + zoom.ToString();
        }
        qs += "&size=" + WWW.UnEscapeURL(string.Format("{0}x{0}", size));
        qs += "&scale=" + (doubleResolution ? "2" : "1");
        qs += "&maptype=" + mapType.ToString().ToLower();
        var usingSensor = false;
#if UNITY_IPHONE
		usingSensor = Input.location.isEnabledByUser && Input.location.status == LocationServiceStatus.Running;
#endif
        qs += "&sensor=" + (usingSensor ? "true" : "false");
		
        foreach (var i in markers)
        {
            qs += "&markers=" + string.Format("size:{0}|color:{1}|label:{2}|", i.size.ToString().ToLower(), i.color, i.label);
            foreach (var loc in i.locations)
            {
                if (loc.address != "")
                    qs += WWW.UnEscapeURL(loc.address);
                else
                    qs += WWW.UnEscapeURL(string.Format("{0},{1}", loc.latitude, loc.longitude));
            }
        }
		
        foreach (var i in paths)
        {
            qs += "&path=" + string.Format("weight:{0}|color:{1}", i.weight, i.color);
            if (i.fill)
                qs += "|fillcolor:" + i.fillColor;
            foreach (var loc in i.locations)
            {
                if (loc.address != "")
                    qs += ":" + WWW.UnEscapeURL(loc.address);
                else
                    qs += ":" + WWW.UnEscapeURL(string.Format("{0},{1}", loc.latitude, loc.longitude));
            }
        }

		
		
        WWW req = new WWW(url + "?" + qs);
        Debug.Log(url + "?" + qs);
        yield return req;

        req.LoadImageIntoTexture(m_Texture);
        this.GetComponent<Image>().sprite = Sprite.Create(m_Texture, new Rect(0, 0, m_Texture.width, m_Texture.height), Vector2.one * 0.5f);

    }

    public void UpdateMarker(int index, string label, GoogleMapColor color, float latitude, float longitude)
    {
        markers[index].label = label;
        markers[index].color = color;
        markers[index].locations[0].latitude = latitude;
        markers[index].locations[0].longitude = longitude;
    }

    public void AddMarker(string label, GoogleMapColor color, float latitude, float longitude)
    {
        m_MarkerIndex++;
        if (m_MarkerIndex < markers.Length)
        {
            markers[m_MarkerIndex].label = label;
            markers[m_MarkerIndex].color = color;
            markers[m_MarkerIndex].size = GoogleMapMarker.GoogleMapMarkerSize.Mid;
            markers[m_MarkerIndex].locations[0].latitude = latitude;
            markers[m_MarkerIndex].locations[0].longitude = longitude;
        }
    }
}

public enum GoogleMapColor
{
    black,
    brown,
    green,
    purple,
    yellow,
    blue,
    gray,
    orange,
    red,
    white
}

[System.Serializable]
public class GoogleMapLocation
{
    public string address;
    public float latitude;
    public float longitude;
}

[System.Serializable]
public class GoogleMapMarker
{
    public enum GoogleMapMarkerSize
    {
        Tiny,
        Small,
        Mid
    }

    public GoogleMapMarkerSize size;
    public GoogleMapColor color;
    public string label;
    public GoogleMapLocation[] locations;
	
}

[System.Serializable]
public class GoogleMapPath
{
    public int weight = 5;
    public GoogleMapColor color;
    public bool fill = false;
    public GoogleMapColor fillColor;
    public GoogleMapLocation[] locations;
}