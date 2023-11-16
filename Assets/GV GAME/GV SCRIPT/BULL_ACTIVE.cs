using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BULL_ACTIVE : MonoBehaviour
{

    public float Damage;

    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    void OnCollisionEnter(Collision col)
    {
        if (col.gameObject.tag == "Player")
        {
            col.gameObject.GetComponent<PlayerLife>().Damaging();
            //GameObject newBlood = Instantiate(blood, this.transform.position, this.transform.rotation);
            //newBlood.transform.parent = col.transform;
            Destroy(this.gameObject);
        }
        if (col.gameObject.tag == "Contain")
        {
            //col.gameObject.GetComponent<EnemyLife>().Damaging();
            
            Destroy(this.gameObject);
        }
        if (col.gameObject.tag == "Environment")
        {
            //col.gameObject.GetComponent<EnemyLife>().Damaging();
            //GameObject newBlood = Instantiate(blood, this.transform.position, this.transform.rotation);
            //newBlood.transform.parent = col.transform;
            Destroy(this.gameObject);
        }
        else
        {
            
        }
 
        //Destroy(this.gameObject);
    }
}
