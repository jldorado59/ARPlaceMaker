using UnityEngine;
using UnityEngine.SceneManagement;
using System.Collections;

public class Home : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

	public void Crear()
	{
        Parameters.Modo = "Crear";
		SceneManager.LoadScene ("PlaceMaker", LoadSceneMode.Single);
	}

	public void Visualizar()
	{
        Parameters.Modo = "Visualizar";
        SceneManager.LoadScene ("PlaceMaker", LoadSceneMode.Single);
	}
}
