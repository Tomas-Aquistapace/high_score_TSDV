#include "high_score_library.h"


namespace score
{
	void Clean(Scores highScore[_sizeList])
	{
		for (int i = 0; i < _sizeList; i++)
		{
			highScore[i].name = " ";
			highScore[i].score = 0;
		}
	}

	void AddNewScore(Scores highScore[_sizeList], int new_score)
	{
		int aux = 0;
		int newDat = new_score;

		for (int i = 0; i < _sizeList; i++)
		{
			if (newDat > highScore[i].score)
			{
				aux = highScore[i].score;

				highScore[i].score = newDat;

				newDat = aux;
			}
		}
	}

	void ShowHighScore(Scores highScore[_sizeList])
	{
		for (int i = 0; i < _sizeList; i++)
		{
			cout << " * " << highScore[i].name << " -- " << highScore[i].score << "\n"<< endl;
		}
	}
}