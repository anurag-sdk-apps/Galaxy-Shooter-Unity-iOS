using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Powerup : MonoBehaviour
{
    [SerializeField]
    private float speed = 3.0f;
    [SerializeField]
    private int powerupID;
    [SerializeField]
    private AudioClip audioClip;
    private GameManager gameManager;
    // Start is called before the first frame update
    void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

    }

    // Update is called once per frame
    void Update()
    {
        if (!gameManager.gamePause)
        {
            transform.Translate(Vector3.down * speed * Time.deltaTime);

            if (transform.position.y < -7.4)
            {
                Destroy(this.gameObject);
            }
        }
        else
        {
            Destroy(this.gameObject);
        }
    }

    private void OnTriggerEnter2D(Collider2D other)
    {
        // Debug.Log(other.gameObject.name + " : " + gameObject.name + " : " + Time.time);

        if (other.tag == "Player")
        {
            Player player = other.GetComponent<Player>();

             AudioSource.PlayClipAtPoint(audioClip, Camera.main.transform.position, 1f);
            if (player != null)
            {
                if (powerupID == 0)
                {
                    player.TripleShotPowerupOn();
                }
                else if (powerupID == 1)
                {
                    player.SpeedBoostPowerupOn();
                }
                else if (powerupID == 2)
                {
                    player.EnableShields();
                }


            }
            Destroy(this.gameObject);
        }


    }
}
