#include <iostream>
#include <vector>
#include <algorithm>
#include "Tic-Tac-Toe.h"

/*	Écrire une fonction void GenerateMap() qui remplit une fois la map avec un char pour représenter que les cases sont vide

	Créer une fonction  ShowMap() qui affiche la carte à son état actuel

	Créer une fonction SetNewPosition(), elle demande au player une position et mets à jours la map

	Créer une fonction void CheckWin() vérifie s’il y a un pattern gagnant sur la map

	Créer une fonction void PlayGame() (appel ShowMap & SetNewPosition())

	Appeler GenerateMap() et PlayGame() in Main()*/


int main()
{

	std::vector<char> board;

	GenerateMap(board);

	PlayGame(board);


	system("pause");
	return EXIT_SUCCESS;
}