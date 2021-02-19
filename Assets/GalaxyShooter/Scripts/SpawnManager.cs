using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpawnManager : MonoBehaviour
{
    [SerializeField]
    private GameObject enemyShipPrefab;
    [SerializeField]
    private GameObject[] powerups;
    private GameManager gameManager;
    // Start is called before the first frame update
    void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        if (gameManager == null)
        {
            Debug.Log("Can not find gameManager");
        }
    }


    public void StartSpawnRoutine()
    {
        StartCoroutine(EnemySpawnRoutine());
        StartCoroutine(PowerupSpawnRoutine());

    }

    IEnumerator EnemySpawnRoutine()
    {
        //while (gameManager.gameOver == false)
        while (gameManager.gameOver == false && gameManager.gamePause == false)
        {
            float randomX = Random.Range(-2.35f, 2.35f);
            Instantiate(enemyShipPrefab, new Vector3(randomX, 7, 0), Quaternion.identity);
            yield return new WaitForSeconds(5.0f);
        }

    }

    IEnumerator PowerupSpawnRoutine()
    {
        // while (gameManager.gameOver == false)
        while (gameManager.gameOver == false && gameManager.gamePause == false)
        {
            int randomPowerup = Random.Range(0, 3);
            float randomX = Random.Range(-2.35f, 2.35f);
            Instantiate(powerups[randomPowerup], new Vector3(randomX, 7, 0), Quaternion.identity);
            yield return new WaitForSeconds(5.0f);
        }

    }
}
