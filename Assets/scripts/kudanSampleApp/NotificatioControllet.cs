using UnityEngine;
using System.Collections;

public class NotificatioControllet : MonoBehaviour {

    public string[] Url;
    public string[] Mensaje;

	// Use this for initialization
	void Start () {
        this.StartCoroutine(Notificacion());
	}
	
	// Update is called once per frame
	void Update () {
	
	}


    IEnumerator Notificacion()
    {
        while(true)
        {
            yield return new WaitForSeconds(Random.Range(5, 10));
            int i = Random.Range(0, Url.Length);
            UnityNotificationBar.UNotify("MENSAJE DEL DISTRITO!: " + Mensaje[i].ToUpper(), Url[i]);
        }
    }
}
