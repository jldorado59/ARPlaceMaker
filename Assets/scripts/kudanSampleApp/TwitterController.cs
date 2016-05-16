using UnityEngine;
using System.Collections;
using SnipnTweet;

public class TwitterController : MonoBehaviour {
    public string twitter_UserName = "";
    public string twitter_Password = "";

    protected SNT_NetworkAdapter adapter;

	// Use this for initialization
	void Start () {
        adapter = this.gameObject.AddComponent<SNT_NetworkAdapter>();
        adapter.shouldShowUI = false;
        adapter.Version();
        adapter.Connect(twitter_UserName, twitter_Password);
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void TwittearScreenShot(string mensaje, byte[] image)
    {
        PlayerPrefs.SetString("snip_message", mensaje);
        PlayerPrefs.Save();
        adapter.SubmitSnipNTweet(image);
    }
}
