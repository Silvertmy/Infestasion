using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GiantDamage : MonoBehaviour
{
    public GameObject Ex;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
     void OnCollisionEnter(Collision col)
    {
        if (col.gameObject.tag == "Giant")
        {
            //col.gameObject.GetComponent<EnemyLife>().Damaging();
            Instantiate(Ex, transform.position, Quaternion.identity);
           
            
            Destroy(gameObject);
        }
    }
}