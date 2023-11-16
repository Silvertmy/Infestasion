using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.AI;

public class WeaponBOT : MonoBehaviour
{
    public float spawnInterval = 2f;    // Time interval between object spawns
    private float timer = 0f;
    
    public GameObject objectPrefab;
    
    public float moveSpeed;           // Timer to keep track of spawn intervals
    


    
    void Update()
{
    timer += Time.deltaTime;
    
    Spawn();

}


    public void Spawn()
    {
    
    if (timer >= spawnInterval)
    {
        timer = 0f;
        
        GameObject spawnedObject = Instantiate(objectPrefab, transform.position, transform.rotation);
        Rigidbody objectRigidbody = spawnedObject.GetComponent<Rigidbody>();
        
        
        
        if (objectRigidbody != null)
        {
            objectRigidbody.velocity = spawnedObject.transform.forward * moveSpeed;
        }
    }
    }



}
