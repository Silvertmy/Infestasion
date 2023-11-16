using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MoveBullet : MonoBehaviour
{
    public Vector3 hitPoint;
 
    public GameObject dirt;
 
    public GameObject spark;
    public GameObject explosive;

    public float Damage;
 
    public int speed;
 
    //public AudioSource myShot;
    // Start is called before the first frame update
    void Start()
    {
        this.GetComponent<Rigidbody>().AddForce((hitPoint - this.transform.position).normalized * speed);
    }
 
    // Update is called once per frame
    void Update()
    {
 
    }
 
    void OnCollisionEnter(Collision col)
    {
        if (col.gameObject.tag == "Enemy")
        {
            col.gameObject.GetComponent<EnemyLife>().Damaging();
            Instantiate(spark, transform.position, Quaternion.identity);
           
            
            Destroy(gameObject);
        }
        if (col.gameObject.tag == "Giant")
        {
            col.gameObject.GetComponent<GiantLife>().Damaging();
            Instantiate(spark, transform.position, Quaternion.identity);
           
            
            Destroy(gameObject);
        }
        if (col.gameObject.tag == "Zombie")
        {
            col.gameObject.GetComponent<ZombieLife>().Damaging();
            Instantiate(spark, transform.position, Quaternion.identity);
           
            
            Destroy(gameObject);
        }

        if (col.gameObject.tag == "Obstacles")
        {
            col.gameObject.GetComponent<ObstaclesLife>().Damaging();
            Instantiate(spark, transform.position, Quaternion.identity);
           
            
            Destroy(gameObject);
        }

        if (col.gameObject.tag == "Contain")
        {
            //col.gameObject.GetComponent<EnemyLife>().Damaging();
            Instantiate(spark, transform.position, Quaternion.identity);
           
            
            Destroy(gameObject);
        }
        if (col.gameObject.tag == "EXP")
        {
            //col.gameObject.GetComponent<EnemyLife>().Damaging();
            Instantiate(explosive, transform.position, Quaternion.identity);
           
            
            //Destroy(this.gameObject);
        }
        if (col.gameObject.tag == "Environment")
        {
            //col.gameObject.GetComponent<EnemyLife>().Damaging();
            //GameObject newBlood = Instantiate(blood, this.transform.position, this.transform.rotation);
            //newBlood.transform.parent = col.transform;
            //Instantiate(Weapon, transform.position, Quaternion.identity);
            Destroy(this.gameObject);
        }
        else
        {
            Instantiate(dirt, this.transform.position, this.transform.rotation);
            //Destroy(this.gameObject);
        }
 
        //Destroy(this.gameObject);
    }
}
