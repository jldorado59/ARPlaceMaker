using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class DialogController : MonoBehaviour {

    public System.Action OnYes;

	// Use this for initialization
	void Start () {
        this.transform.localScale = Vector3.zero;
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void Mostrar(string titulo, string mensaje)
    {
        this.transform.localScale = Vector3.one;
        transform.FindChild("Titulo").GetComponent<Text>().text = titulo;
        transform.FindChild("Mensaje").GetComponent<Text>().text = mensaje;
    }

    public void Si()
    {
        OnYes();
        this.transform.localScale = Vector3.zero;
    }

    public void No()
    {
        this.transform.localScale = Vector3.zero;
    }
}
