#ifndef HIGH_SCORE_H
#define HIGH_SCORE_H

#include <iostream>
#include <string.h>
#include <string>

using namespace std;

namespace score
{
	const int _sizeList = 10;																// Total list size
	struct Scores																			// Struc that determines the composition of the array
	{
		string name;
		int score;
	};																						// Ej: Scores _highScore[_sizeList];

	void Clean(Scores _highScore[_sizeList]);												// Clear all array positions
	void AddNewScore(Scores _highScore[_sizeList], string namePlayer, int new_score);		// Add a new value to the table, removing the smallest number (if you have one)
	void DeleteHalf(Scores _highScore[_sizeList], bool upperHalf);							// Delete the top or bottom half of the array
	void DeleteSpecificPlayer(Scores _highScore[_sizeList], string playerToDelete);			// Delete a specific score
	void ShowHighScore(Scores _highScore[_sizeList]);										// Show the entire table per screen
}

#endif // !HIGH_SCORE_H
