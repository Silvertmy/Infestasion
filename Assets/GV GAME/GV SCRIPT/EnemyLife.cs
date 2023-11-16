using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.AI;

public class EnemyLife : MonoBehaviour
{
    public float _maxHealth = 30;
    public GameObject _deatheffect, _hitEffect;
     
    public float _currentHealth;
    public Text currentHealth;

    public NavMeshAgent navMeshAgent;

    public MoveBullet mvBullet;

    public GameObject FullBOT;
    public GameObject Explode;
    private CamerShake cameraShake;

    private Animator[] anim;


    public HealthController _healthbar;

    // Start is called before the first frame update
    void Start()
    {
        cameraShake =  GetComponent<CamerShake>();
        _currentHealth = _maxHealth;

        _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
    }



    // Update is called once per frame
    void Update()
    {
        currentHealth.text = "" + _currentHealth.ToString();

        /*if(navMeshAgent.remainingDistance == 2)
        {
            Debug.Log("Character has reached the stopping distance.");
        }*/
    }
    public void Damaging()
    {
        _currentHealth -=mvBullet.Damage;

        if(_currentHealth <= 0)
        {
            Instantiate(Explode, transform.position, Quaternion.identity);
            Destroy(FullBOT.gameObject);
        }
        else
        {
            _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
            Instantiate(_hitEffect, transform.position, Quaternion.identity);
        }       
    }

    /*void OnMouseDown()
    {
        _currentHealth -= 2f;

        if(_currentHealth <= 0)
        {
            Instantiate(_deatheffect, transform.position, Quaternion.Euler(-90,0,0));
        }
        else
        {
            _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
            Instantiate(_hitEffect, transform.position, Quaternion.identity);
        }       
    }*/
}