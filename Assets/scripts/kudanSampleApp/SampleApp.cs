using UnityEngine;
using UnityEngine.UI;
using UnityEngine.SceneManagement;
using System.Collections;

namespace Kudan.AR.Samples
{
	public class SampleApp : MonoBehaviour
	{
		public KudanTracker _kudanTracker;
		public TrackingMethodMarkerless _markerlessTracking;
		public ObjectManager AdminObjetos;
		public ScenePersistence Persistencia;
		public GameObject caneca;
		public GameObject banca;
		public GameObject elMarcador;

        public void Start()
        {
            GameObject.Find("Mapa").GetComponent<Image>().enabled = false;
        }

		public void ponerCaneca ()
		{
			Almacenar (caneca);
		}

		public void ponerBanca ()
		{
			Almacenar (banca);
		}

		public GameObject Almacenar (GameObject prefab)
		{
			GameObject obj = GameObject.Instantiate (prefab, elMarcador.transform.position, elMarcador.transform.rotation) as GameObject;
			obj.transform.parent = elMarcador.transform;

			AdminObjetos.AdicionarObjeto (obj);

			return obj;
		}

		public void CargarEscenea ()
		{
			Escena escena = Persistencia.LeerEscenea ();

			foreach (Objeto obj in escena.Objetos) {

				GameObject miObject = null;

				switch (obj.Name.Replace("(Clone)", string.Empty)) {
				case "miCaneca":
					miObject = Almacenar (caneca);
					break;
				case "miBanca":
					miObject = Almacenar (banca);
					break;
				}

				miObject.transform.localPosition = obj.Position;
				miObject.transform.localRotation = obj.Rotation;
			}
		}

        public void MostrarMapa()
        {
            GameObject.Find("Mapa").GetComponent<Image>().enabled = !GameObject.Find("Mapa").GetComponent<Image>().enabled;
        }

        public void Back()
        {
            SceneManager.LoadScene("Home", LoadSceneMode.Single);
        }

		public void StartClicked ()
		{
			Vector3 floorPosition;
			Quaternion floorOrientation;

			_kudanTracker.FloorPlaceGetPose (out floorPosition, out floorOrientation);
			_kudanTracker.ArbiTrackStart (floorPosition, floorOrientation);
		}
	}
}