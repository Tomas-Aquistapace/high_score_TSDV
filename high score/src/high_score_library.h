#ifndef HIGH_SCORE_H
#define HIGH_SCORE_H

namespace score
{
	// limpiar todos los espacios
	extern void Clean(int highScore[], int total_scores);
	// agregar un nuevo valor
	extern void AddNewScore(int highScore[], int total_scores, int new_score);
	// mostrar
	extern void Show(int highScore[], int total_scores);
}

#endif // !HIGH_SCORE_H
