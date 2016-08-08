using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Collections;

using Kudan.AR;

public class ObjectManager : MonoBehaviour
{
    public GameObject Arrow;
    public List<GameObject> misObjectos;
    public GameObject BtnBorrar;
    public GameObject BtnRotar;
    public GameObject BtnTrasladar;
 
    protected GameObject miSeleccionado;
    protected GameObject miPrevious;
    protected Dictionary<Material, Color> misColores;

    protected bool m_IsRotating;
    protected bool m_IsTraslating;

    // Use this for initialization
    void Start()
    {
        BtnBorrar.SetActive(false);
        BtnTrasladar.SetActive(false);
        BtnRotar.SetActive(false);

        misObjectos = new List<GameObject>();
        misColores = new Dictionary<Material, Color>();
    }
	
    // Update is called once per frame
    void Update()
    {
        #if(UNITY_EDITOR_WIN)
        if (Input.GetMouseButton(0))
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.mousePosition);
            #else
		if (Input.touchCount > 0 && Input.GetTouch (0).phase == TouchPhase.Began) {
			Ray ray = Camera.main.ScreenPointToRay (Input.GetTouch (0).position);
            #endif
            RaycastHit hit;
            if (Physics.Raycast(ray, out hit))
            {				
                for (int i = 0; i < misObjectos.Count; i++)
                {
                    if (hit.transform.gameObject == misObjectos[i])
                    {
                        if (miSeleccionado != null)
                        {
                            foreach (MeshRenderer renderer in miSeleccionado.GetComponentsInChildren<MeshRenderer>())
                            {
                                foreach (Material material in renderer.materials)
                                    material.color = misColores[material];
                            }                       
                        }

                        if (misObjectos[i] != miPrevious)
                        {
                            miSeleccionado = misObjectos[i];
                            misColores.Clear();
                            foreach (MeshRenderer renderer in miSeleccionado.GetComponentsInChildren<MeshRenderer>())
                            {                            
                                foreach (Material material in renderer.materials)
                                {
                                    misColores.Add(material, material.color);
                                    material.color = Color.green;
                                }
                            }

                            miPrevious = miSeleccionado;

                            BtnBorrar.SetActive(true);
                            BtnTrasladar.SetActive(true);
                            BtnRotar.SetActive(true);
                        }
                        else
                        {
                            foreach (MeshRenderer renderer in miPrevious.GetComponentsInChildren<MeshRenderer>())
                            {
                                foreach (Material material in renderer.materials)
                                    material.color = misColores[material];
                            }                              

                            BtnBorrar.SetActive(false);
                            BtnTrasladar.SetActive(false);
                            BtnRotar.SetActive(false);

                            miPrevious = new GameObject();
                        }

                        break;
                    }			
                }	
            }
        }
    }

    void OnDrag(DragGesture gesture)
    {		
        if (miSeleccionado != null)
        {
            if (m_IsRotating)
                miSeleccionado.transform.localRotation *= Quaternion.AngleAxis(gesture.DeltaMove.x * 10.0f * Time.deltaTime, Vector3.up);

            if (m_IsTraslating)
            {
                miSeleccionado.transform.localPosition += Vector3.right * gesture.DeltaMove.x + Vector3.forward * gesture.DeltaMove.y;
            }
        }
    }

    public void BorrarObjecto()
    {
        if (miSeleccionado != null)
        {
            misObjectos.Remove(miSeleccionado);
            DestroyObject(miSeleccionado);

            BtnBorrar.SetActive(false);
            BtnTrasladar.SetActive(false);
            BtnRotar.SetActive(false);
        }
    }

    public void AdicionarObjeto(GameObject obj)
    {
        misObjectos.Add(obj);
    }

    public void SetDeltaPos(Vector3 delta)
    {
        for (int i = 0; i < misObjectos.Count; i++)
            misObjectos[i].transform.localPosition -= delta;
    }

    public void Rotar()
    {
        m_IsRotating = !m_IsRotating;
        m_IsTraslating = !m_IsRotating;
        BtnRotar.GetComponent<Image>().color = m_IsRotating ? Color.green : Color.white;
        BtnTrasladar.GetComponent<Image>().color = Color.white;
    }

    public void Trasladar()
    {
        m_IsTraslating = !m_IsTraslating;
        m_IsRotating = !m_IsTraslating;
        BtnTrasladar.GetComponent<Image>().color = m_IsTraslating ? Color.green : Color.white;
        BtnRotar.GetComponent<Image>().color = Color.white;
    }

}
