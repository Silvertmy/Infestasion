using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;

public class ObstaclesLife : MonoBehaviour
{
    public float _maxHealth = 30;
    public GameObject _deatheffect, _hitEffect;
     
    public float _currentHealth;

    public MoveBullet mvBullet;

    public GameObject FullBOT;
    public GameObject Obst;
    public GameObject Explode;
    // Reference to the GameObject with the BlastScript component
    public GameObject objectWithBlastScript;

    // Reference to the BlastScript component on the other GameObject
    private BlastScript blastScript;
    // Start is called before the first frame update
    void Start()
    {
        _currentHealth = _maxHealth;
        //blastScript = GetComponent<BlastScript>();
        blastScript = objectWithBlastScript.GetComponent<BlastScript>();
    }

    // Update is called once per frame
    public void Damaging()
    {
        _currentHealth -=mvBullet.Damage;

        if(_currentHealth <= 0)
        {
            if (blastScript != null)
            {
                // Call the Blast coroutine from the other GameObject
                StartCoroutine(blastScript.Blast());
            }

            Destroy(FullBOT.gameObject);
        }
        else
        {
            Instantiate(_hitEffect, transform.position, Quaternion.identity);
        }       
    }
}
