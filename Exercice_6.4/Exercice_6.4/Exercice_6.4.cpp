#include <iostream>
#include <vector>
#include <algorithm>

/*	Écrire une fonction void GenerateMap() qui remplit une fois la map avec un char pour représenter que les cases sont vide

	Créer une fonction  ShowMap() qui affiche la carte à son état actuel

	Créer une fonction SetNewPosition(), elle demande au player une position et mets à jours la map

	Créer une fonction void CheckWin() vérifie s’il y a un pattern gagnant sur la map

	Créer une fonction void PlayGame() (appel ShowMap & SetNewPosition())

	Appeler GenerateMap() et PlayGame() in Main()*/

void Instructions()
{
	std::cout << "\t Welcome to the Tic-Tac-Toe Game!\n\n\n";
	std::cout << "You play by entering a number between 0 and 8 to decide the position you want to place your piece as shown by the grid below:\n\n";
	std::cout << "0 | 1 | 2\n";
	std::cout << "---------\n";
	std::cout << "3 | 4 | 5\n";
	std::cout << "---------\n";
	std::cout << "6 | 7 | 8\n\n";

	std::cout << "Let the game begin!\n\n";
}

void GenerateMap() /*Vincent*/
{

}

void ShowMap() /*Vincent*/
{

}

void SetNewPosition() /*Gael*/
{

}

void CheckWin() /*Gael*/
{

}

void PlayGame() /* ? */
{

}

int main()
{
	Instructions();



	system("pause");
	return EXIT_SUCCESS;
}