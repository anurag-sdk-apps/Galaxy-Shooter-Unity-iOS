using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class UIManager : MonoBehaviour
{
    public Sprite[] lives;
    public Image livesImageDisplay;
    public Text currentScoreText;
    public Text totalScoreText;
    public Text bestScoreText;
    public Text gameOverTotalScore;
    public Text gameOverBestScore;
    private int currentScore;
    private int totalScore;
    private int bestScore;
    public GameObject titleScreen;
    private GameManager gameManager;
    public GameObject restartButton;
    public GameObject quitButton;
    public GameObject gamePausePanel;
    public GameObject gameOverMessagePanel;
    public GameObject gameOverPanel;
    [SerializeField]
    private bool earnLive = false;
    public GameObject earnLivePanel;
    public GameObject adFailedPanel;
    void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

        if (gameManager == null)
        {
            Debug.Log("Can not find gameManager");
        }
        gamePausePanel.SetActive(false);
        gameOverPanel.SetActive(false);
        gameOverMessagePanel.SetActive(false);
        earnLivePanel.SetActive(false);
        adFailedPanel.SetActive(false);
        if (PlayerPrefs.GetInt("earnLiveScore", 0) > 0)
        {
            currentScore = PlayerPrefs.GetInt("earnLiveScore", 0);
            PlayerPrefs.SetInt("earnLiveScore", 0);
        }
        else
        {
            currentScore = 0;
        }
        totalScore = PlayerPrefs.GetInt("totalScore", 0);
        bestScore = PlayerPrefs.GetInt("bestScore", 0);
        currentScoreText.text = "Score: " + currentScore;
        totalScoreText.text = "Total Score: " + totalScore;
        bestScoreText.text = "Best Score: " + bestScore;
    }


    public void UpdateLives(int currentLives)
    {
        livesImageDisplay.sprite = lives[currentLives];
        if (currentLives < 1)
        {
            gameManager.gamePause = true;
            ShowGamePause();
        }
    }

    public void UpdateScores(int score)
    {
        currentScore += score;
        totalScore += score;
        UpdateCurrentScore();
        UpdateTotalScore();
        UpdateBestScore();
    }

    void UpdateCurrentScore()
    {
        PlayerPrefs.SetInt("currentScore", currentScore);
        currentScoreText.text = "Score: " + currentScore;
    }

    void UpdateTotalScore()
    {
        PlayerPrefs.SetInt("totalScore", totalScore);
        totalScoreText.text = "Total Score: " + totalScore;
    }

    void UpdateBestScore()
    {
        if (PlayerPrefs.GetInt("currentScore", 0) > PlayerPrefs.GetInt("bestScore", 0))
        {
            currentScore = PlayerPrefs.GetInt("currentScore", 0);
            PlayerPrefs.SetInt("bestScore", currentScore);
            bestScoreText.text = "Best Score: " + currentScore;
        }
        else
        {
            PlayerPrefs.SetInt("bestScore", bestScore);
            bestScoreText.text = "Best Score: " + bestScore;
        }

    }

    public void ShowTitleScreen()
    {
        titleScreen.SetActive(true);
        gameOverPanel.SetActive(true);
        gameOverTotalScore.text = "Your's total score:  " + PlayerPrefs.GetInt("totalScore", 0);

        if (PlayerPrefs.GetInt("bestScore", 0) > 0)
        {
            gameOverBestScore.text = "Your's best score:  " + PlayerPrefs.GetInt("bestScore", 0);
        }
        else
        {
            gameOverBestScore.text = "Your's best score: " + PlayerPrefs.GetInt("currentScore", 0);
        }

        PlayerPrefs.SetInt("currentScore", 0);
        PlayerPrefs.SetInt("earnLiveScore", 0);
    }


    public void HideTitileScreen()
    {
        titleScreen.SetActive(false);
        gameOverPanel.SetActive(false);
    }

    public void ShowRestart()
    {
        if (gameManager.gameOver)
        {
            restartButton.SetActive(true);
            quitButton.SetActive(false);
        }
        else
        {
            restartButton.SetActive(false);
            quitButton.SetActive(true);
        }

    }

    public void ShowGamePause()
    {
         gamePausePanel.SetActive(true);
    }

    public bool EarnLiveStatus()
    {
        return earnLive;
    }

    public void UpdateEarnLiveStatus(bool livestatus)
    {
        earnLive = livestatus;
        PlayerPrefs.SetInt("earnLiveScore", currentScore);
    }
}
