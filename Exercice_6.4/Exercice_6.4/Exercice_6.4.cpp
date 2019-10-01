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

/*void SetNewPosition() Gael
{
	int board;
	bool coordinated = false;

	do {
		int playerNumber = 1;
		int squareLine = 0;
		int squareColumn = 0;
		int compteur = 0;

		system("cls"); //Clear la console
		compteur++;

		std::cout << "Player " << playerNumber << " : \n";
		do {
			std::cout << "Choise the line of the square   : ";
			std::cin >> squareLine;
			std::cout << "choise the column of the square : ";
			std::cin >> squareColumn;

		} while (coordinated != true(board, squareLine, squareColumn));

		if (playerNumber == 1)
			board[squareLine - 1][squareColumn - 1] = 'x';
		else
			board[squareLine - 1][squareColumn - 1] = 'o';


		playerNumber = playerNumber % 2 + 1;
	}

	bool (coordinated = true, int x, int y)
	{
		if (x <= 3 && x >= 1 && y <= 3 && y >= 1) {
			if (grille[x - 1][y - 1] != '_')
				cout << "Case deja pleine !  " << endl << endl;
			else
				return true;
		}
		else
			cout << "Coordonees Invalide ! " << endl << endl;

		return false;
	}
}

void CheckWin() /*Gael
{ 
	bool winner = true;
	while (winner(board) && round != 9);
	system("cls");

	playerNumber = playerNumber % 2 + 1;
	if (winner(board))
		std::cout << "the player " << playerNumber << " as win the game.\n\n";
	else
		std::cout << "the game is a egality !\n\n";
}*/



int main()
{

	std::vector<char> board;

	GenerateMap(board);

	PlayGame(board);


	system("pause");
	return EXIT_SUCCESS;
}