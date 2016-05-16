using UnityEngine;
using System.Collections.Generic;
using System.Collections;

using Kudan.AR;

public class ObjectManager : MonoBehaviour
{
	public List<GameObject> misObjectos;
	public GameObject BotonBorrar;

	protected GameObject miSeleccionado;
    protected Dictionary<Material, Color> misColores;

	// Use this for initialization
	void Start ()
	{
        if(BotonBorrar != null)
		    BotonBorrar.SetActive (false);
        
		misObjectos = new List<GameObject>();
        misColores = new Dictionary<Material, Color>();
	}
	
	// Update is called once per frame
	void Update ()
	{
        #if(UNITY_EDITOR_WIN)
        if (Input.GetMouseButton(0)) {
            Ray ray = Camera.main.ScreenPointToRay (Input.mousePosition);
        #else
		if (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Began) {
			Ray ray = Camera.main.ScreenPointToRay (Input.GetTouch (0).position);
        #endif
			RaycastHit hit;
			if (Physics.Raycast (ray, out hit)) {
				
				for (int i = 0; i < misObjectos.Count; i++) {

					if (hit.transform.gameObject == misObjectos[i]) {						

						if (miSeleccionado != null) {
                            foreach (MeshRenderer renderer in miSeleccionado.GetComponentsInChildren<MeshRenderer>())
                            {
                                foreach (Material material in renderer.materials)
                                    material.color = misColores[material];
                            }
						}

						miSeleccionado = misObjectos [i];
                        misColores.Clear();
                        foreach (MeshRenderer renderer in miSeleccionado.GetComponentsInChildren<MeshRenderer>())
                        {                            
                            foreach (Material material in renderer.materials)
                            {
                                misColores.Add(material, material.color);
                                material.color = Color.green;
                            }
                        }

						BotonBorrar.SetActive (true);

						break;
					}			
				}	
			}
		}
	}

	void OnDrag (DragGesture gesture)
	{		
		if (miSeleccionado != null) {
            //Vector3 dir = elTracker.position - elMarcador.position;
            //Vector3 right = Quaternion.AngleAxis(90, Vector3.up) * dir;

			if (gesture.Position.x > Screen.width / 3)
                miSeleccionado.transform.localPosition +=  Vector3.right * gesture.DeltaMove.x + Vector3.forward * gesture.DeltaMove.y;
			else
				miSeleccionado.transform.localRotation *= Quaternion.AngleAxis (gesture.DeltaMove.x * 30.0f * Time.deltaTime, Vector3.up);
		}
	}

	void OnTwist (TwistGesture gesture)
	{
		if (miSeleccionado != null) {
			miSeleccionado.transform.localRotation *= Quaternion.AngleAxis (gesture.DeltaRotation, Vector3.up);
		}
	}

	void OnPinch(PinchGesture gesture)
	{
		if (miSeleccionado != null) {
			miSeleccionado.transform.localScale = Vector3.one * gesture.Delta * 10.0f;
		}
	}


	public void BorrarObjecto()
	{
		if (miSeleccionado != null) {
			misObjectos.Remove (miSeleccionado);
			DestroyObject (miSeleccionado);
			BotonBorrar.SetActive (false);
		}
	}

	public void AdicionarObjeto (GameObject obj)
	{
		misObjectos.Add (obj);
	}
}
