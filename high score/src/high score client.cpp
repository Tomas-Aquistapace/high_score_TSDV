#include <iostream>
#include "high_score_library.h"

using namespace std;
using namespace score;

int main()
{
	Scores _highScore[_sizeList];

	// ---

	Clean(_highScore);
	AddNewScore(_highScore, "TOMAS", 20);
	AddNewScore(_highScore, "JOSE", 10);
	AddNewScore(_highScore, "MIGUEL", 15);
	AddNewScore(_highScore, "MIGUEL2", 35);
	AddNewScore(_highScore, "MIGUEL3", 35);
	AddNewScore(_highScore, "MIGUEL4", 35);
	AddNewScore(_highScore, "MIGUEL5", 35);
	AddNewScore(_highScore, "MIGUEL6", 35);
	AddNewScore(_highScore, "MIGUEL7", 35);
	AddNewScore(_highScore, "MIGUEL8", 40);

	//DeleteSpecificPlayer(_highScore, "MIGUEL");

	ShowHighScore(_highScore);

	return 0;
}
