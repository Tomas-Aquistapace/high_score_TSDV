#include <iostream>
#include "high_score_library.h"

using namespace std;
using namespace score;

int main()
{
	Scores _highScore[_sizeList];

	// ---

	Clean(_highScore);
	ShowHighScore(_highScore);

	return 0;
}
