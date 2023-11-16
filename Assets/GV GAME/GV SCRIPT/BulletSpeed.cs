using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BulletSpeed : MonoBehaviour
{
    private Transform hitPoint;
 
    public GameObject dirt;
 
    public GameObject spark;
    public GameObject explosive;

    public float Damage;
 
    public int speed;
 
    //public AudioSource myShot;
    // Start is called before the first frame update
    public void SetHitTransform(Transform hitTransform)
{
    hitPoint = hitTransform;
}

void Start()
{
    hitPoint = GameObject.Find("HitMe").transform;

    if (hitPoint != null)
    {
        Vector3 direction = hitPoint.position - this.transform.position;
        this.GetComponent<Rigidbody>().AddForce(direction.normalized * speed);
    }
    else
    {
        Debug.LogWarning("hitPoint is not assigned.");
    }
}
 
    // Update is called once per frame
    void Update()
    {
 
    }
 
    void OnCollisionEnter(Collision col)
    {
        if (col.gameObject.tag == "Enemy")
        {
            Instantiate(spark, transform.position, Quaternion.identity);
           
            
            Destroy(gameObject);
        }
        else
        {
            Instantiate(dirt, this.transform.position, this.transform.rotation);
            //Destroy(this.gameObject);
        }
 
        //Destroy(this.gameObject);
    }
}
