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
        public GameObject elMarcador;
        public GameObject Caneca;
        public GameObject Banca;
        public GameObject Policia;
        public GameObject Lampara;
        public GameObject Juego;
        public GameObject Arbol;


        public void Start()
        {
            GameObject.Find("Mapa").GetComponent<Image>().enabled = false;
        }

        public void Update()
        {
    
        }

        public void ponerCaneca()
        {
            Almacenar(Caneca);
        }

        public void ponerBanca()
        {
            Almacenar(Banca);
        }

        public void ponerPolicia()
        {
            Almacenar(Policia);
        }

        public void ponerLampara()
        {
            Almacenar(Lampara);
        }

        public void ponerJuego()
        {
            Almacenar(Juego);
        }

        public void ponerArbol()
        {
            Almacenar(Arbol);
        }

        public GameObject Almacenar(GameObject prefab)
        {
            GameObject obj = GameObject.Instantiate(prefab, elMarcador.transform.position, elMarcador.transform.rotation) as GameObject;
            obj.transform.parent = elMarcador.transform;

            AdminObjetos.AdicionarObjeto(obj);

            return obj;
        }

        public void CargarEscenea()
        {
            Escena escena = Persistencia.LeerEscenea();

            foreach (Objeto obj in escena.Objetos)
            {

                GameObject miObject = null;

                switch (obj.Name.Replace("(Clone)", string.Empty))
                {
                    case "Caneca":
                        miObject = Almacenar(Caneca);
                        break;
                    case "Banca":
                        miObject = Almacenar(Banca);
                        break;
                    case "Policia":
                        miObject = Almacenar(Policia);
                        break;
                    case "Arbol":
                        miObject = Almacenar(Arbol);
                        break;
                    case "Lampara":
                        miObject = Almacenar(Lampara);
                        break;
                    case "Juego":
                        miObject = Almacenar(Juego);
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

        public void StartClicked()
        {
            Vector3 floorPosition;
            Quaternion floorOrientation;

            _kudanTracker.FloorPlaceGetPose(out floorPosition, out floorOrientation);
            _kudanTracker.ArbiTrackStart(floorPosition, floorOrientation);
        }
    }
}