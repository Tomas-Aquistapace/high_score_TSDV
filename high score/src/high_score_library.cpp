#include "high_score.h"

namespace score
{
	void Clean(int highScore[], int total_scores)
	{
		for (int i = 0; i < total_scores; i++)
		{
			highScore[i] = 0;
		}
	}

	void AddNewScore(int highScore[], int total_scores, int new_score)
	{
		int aux = 0;
		int newDat = new_score;

		for (int i = 0; i < total_scores; i++)
		{
			if (newDat > highScore[i])
			{
				aux = highScore[i];

				highScore[i] = newDat;

				newDat = aux;
			}
		}
	}

	void Show(int highScore[], int total_scores)
	{



	}
}