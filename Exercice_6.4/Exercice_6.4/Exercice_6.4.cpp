#include <iostream>
#include <vector>
#include <algorithm>
#include "Tic-Tac-Toe.h"

/*	�crire une fonction void GenerateMap() qui remplit une fois la map avec un char pour repr�senter que les cases sont vide

	Cr�er une fonction  ShowMap() qui affiche la carte � son �tat actuel

	Cr�er une fonction SetNewPosition(), elle demande au player une position et mets � jours la map

	Cr�er une fonction void CheckWin() v�rifie s�il y a un pattern gagnant sur la map

	Cr�er une fonction void PlayGame() (appel ShowMap & SetNewPosition())

	Appeler GenerateMap() et PlayGame() in Main()*/


int main()
{

	std::vector<char> board;

	GenerateMap(board);

	PlayGame(board);


	system("pause");
	return EXIT_SUCCESS;
}