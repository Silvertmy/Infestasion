using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class HostageHealth : MonoBehaviour
{
    /*This Handles the health effect of the hostage*/
    public float _maxHealth = 30;
    public GameObject _deatheffect, _hitEffect;
     
    public float _currentHealth;
    public Text currentHealth;

    //public UnityEngine.AI.NavMeshAgent navMeshAgent;

    //public MoveBullet mvBullet;

    //public GameObject FullBOT;
    public GameObject Explode;
    private CamerShake cameraShake;
    public HealthController _healthbar;

    private EnemyFollowAI enemyfollow;
    private MajorZombie majorZombie;

    public LevelGameSystem levels;

    

    
    // Start is called before the first frame update
    void Start()
    {
        //Find Objects Via Script "EnemyFollowAI"
        GameObject EnemyZombie = GameObject.FindGameObjectWithTag("Enemy");
        enemyfollow = EnemyZombie.GetComponent<EnemyFollowAI>();

        GameObject EnemyMajor = GameObject.FindGameObjectWithTag("Zombie");
        majorZombie = EnemyMajor.GetComponent<MajorZombie>();
        
        cameraShake =  GetComponent<CamerShake>();
        _currentHealth = _maxHealth;

        _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
    }

    // Update is called once per frame
    void Update()
    {
        currentHealth.text = "" + _currentHealth.ToString();
    }

    public void Damaging()
    {

        //Should Change to have an interval for damage;////////////////////////////////////////////////////////////// ?
        _currentHealth -=enemyfollow.Damage;

        if(_currentHealth <= 0)
        {
            Instantiate(Explode, transform.position, Quaternion.identity);
            //Destroy(FullBOT.gameObject);

            //What Happens if it goes to 0 /////////////////////////////////////////////////////////////////////////////////////// ?
            //For Now:
            levels.Replay();
        }
        else
        {
            _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
            Instantiate(_hitEffect, transform.position, Quaternion.identity);
        }   

    } 

    public void ZombieDamaging()
    {
        //Should Change to have an interval for damage;////////////////////////////////////////////////////////////// ?
        _currentHealth -=majorZombie.Damage;

        if(_currentHealth <= 0)
        {
            Instantiate(Explode, transform.position, Quaternion.identity);
            //Destroy(FullBOT.gameObject);

            //What Happens if it goes to 0 /////////////////////////////////////////////////////////////////////////////////////// ?
            //For Now:
            levels.Replay();
        }
        else
        {
            _healthbar.UpdateHealthBar(_maxHealth, _currentHealth);
            Instantiate(_hitEffect, transform.position, Quaternion.identity);
        }   
    }
    
}
