using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnPref : MonoBehaviour
{
    public GameObject objectToSpawn; // Reference to the prefab you want to spawn
    public int numberOfObjects = 100; // Number of objects to spawn
    public Transform spawnTransform; // The transform where you want to spawn objects
    public float spawnRadius = 5.0f; // The radius within which objects will be randomly spawned

    void Start()
    {
        SpawnObjects();
    }

    void SpawnObjects()
    {
        for (int i = 0; i < numberOfObjects; i++)
        {
            Vector3 randomOffset = Random.insideUnitSphere * spawnRadius;
            Instantiate(objectToSpawn, spawnTransform.position + randomOffset, Quaternion.identity);
        }
    }
}
