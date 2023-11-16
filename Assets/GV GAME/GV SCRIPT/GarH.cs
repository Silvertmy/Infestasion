using System.Collections;
using System.Collections.Generic;
using UnityEngine;


public class GarH : MonoBehaviour
{
    public Camera cam;
    Collider planecollider;
    RaycastHit hit;
    Ray ray;
    // Start is called before the first frame update
    void Start()
    {
        cam = GameObject.Find("MainCamera").GetComponent<Camera>();
        planecollider = GameObject.Find("Plane").GetComponent<Collider>();
    }

    // Update is called once per frame
    void Update()
    {
        //transform.position = cam.ScreenToWorldPoint(new Vector3(Input.mousePosition.x, Input.mousePosition.y, 5));
        //transform.LookAt(new Vector3(Input.mousePosition.x, Input.mousePosition.y, 5));
        ray = cam.ScreenPointToRay(Input.mousePosition);
        if(Physics.Raycast(ray, out hit))
        {
            if(hit.collider == planecollider)
            {
                //transform.position = Vector3.MoveTowards(transform.position, hit.point, Time.deltaTime * 5);
                transform.LookAt(new Vector3(hit.point.x, transform.position.y, hit.point.z));
            }
                

        }
    }
}
