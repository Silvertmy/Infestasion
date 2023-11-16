using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TriggerGem1 : MonoBehaviour
{
    public GameObject Spark_BX;

    public GameObject Award;

    //public Animator ChestOpen;

    public GameObject Key1A;
    public GameObject Key1B;

    public GameObject activate;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnTriggerStay(Collider other)
    {
        if (other.CompareTag("Key1"))
        {
            Key1A.gameObject.SetActive(true);
            Key1B.gameObject.SetActive(true);
        }
        /*else
        {
            Key1A.gameObject.SetActive(false);
            Key1B.gameObject.SetActive(false);
        }*/
    }

    public void Unlock_GR()
    {
        //ChestOpen.SetBool("UNL_GEM1", true);
        Instantiate(Spark_BX, transform.position, Quaternion.identity);
        Award.gameObject.SetActive(true);//Depending on the award ...points wll be allocated;
        activate.gameObject.SetActive(false);
        Key1A.gameObject.SetActive(false);
        Key1B.gameObject.SetActive(false);

    }
}
