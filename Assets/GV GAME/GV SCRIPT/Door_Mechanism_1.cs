using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Door_Mechanism_1 : MonoBehaviour
{
    public Animator Door_Motion;
    public GameObject entry;
    public GameObject dipart;

    public GameObject Hall01;
    public GameObject Hall02;
    public GameObject Hall03;

  

    // Start is called before the first frame update
    void Start()
    {
        dipart.gameObject.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OpenDoor()
    {
        Door_Motion.SetBool("DOOR01", true);
    }

    public void CloseDoor()
    {
        Door_Motion.SetBool("DOOR01", false);
    }

    void OnCollisionEnter(Collision col)
    {
        if (col.gameObject.tag == "Open")
        {
            OpenDoor();
            dipart.gameObject.SetActive(true);
            entry.gameObject.SetActive(false);
            //Destroy(this.gameObject);
        }
        if(col.gameObject.tag == "MainFloor")
        {
            CloseDoor();
            entry.gameObject.SetActive(true);
            dipart.gameObject.SetActive(false);
        }

        
    }

    
}
