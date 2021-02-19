using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class EnemyAI : MonoBehaviour
{

    private float speed = 5.0f;
    [SerializeField]
    public GameObject enemyExplosionPrefab;
    private UIManager uiManager;
    [SerializeField]
    private AudioClip audioClip;
    private GameManager gameManager;
    // Start is called before the first frame update
    void Start()
    {
        uiManager = GameObject.Find("Canvas").GetComponent<UIManager>();
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
    }

    // Update is called once per frame
    void Update()
    {
        if (!gameManager.gamePause)
        {
            transform.Translate(Vector3.down * speed * Time.deltaTime);
            if (transform.position.y < -7)
            {
                float randomX = Random.Range(-2.45f, 2.45f);
                transform.position = new Vector3(randomX, 7, 0);
            }
        }
        else
        {
            Destroy(this.gameObject);
        }
    }


    private void OnTriggerEnter2D(Collider2D other)
    {
        if (other.tag == "Laser")
        {
            if (other.transform.parent != null)
            {
                Destroy(other.transform.parent.gameObject);
            }
            Destroy(other.gameObject);
            Instantiate(enemyExplosionPrefab, transform.position, Quaternion.identity);
            uiManager.UpdateScores(10);
            //audioSource.Play();
            AudioSource.PlayClipAtPoint(audioClip, Camera.main.transform.position, 1f);
            Destroy(this.gameObject);
        }
        else if (other.tag == "Player")
        {
            Player player = other.GetComponent<Player>();
            if (player != null)
            {
              player.Damage();
            }

            Instantiate(enemyExplosionPrefab, transform.position, Quaternion.identity);
            //audioSource.Play();
            AudioSource.PlayClipAtPoint(audioClip, Camera.main.transform.position, 1f);
            Destroy(this.gameObject);

        }
    }
}
