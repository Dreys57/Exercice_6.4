#include <iostream>
#include <vector>
#include <algorithm>

#define SIZE_MAX_BOARD 9;

/*	Écrire une fonction void GenerateMap() qui remplit une fois la map avec un char pour représenter que les cases sont vide

	Créer une fonction  ShowMap() qui affiche la carte à son état actuel

	Créer une fonction SetNewPosition(), elle demande au player une position et mets à jours la map

	Créer une fonction void CheckWin() vérifie s’il y a un pattern gagnant sur la map

	Créer une fonction void PlayGame() (appel ShowMap & SetNewPosition())

	Appeler GenerateMap() et PlayGame() in Main()*/

void Instructions()
{
	std::cout << "\t\t\t\t\t Welcome to the Tic-Tac-Toe Game!\n\n\n";
	std::cout << "You play by entering a number between 0 and 8 to decide the position you want to place your piece as shown by the grid below:\n\n";
	std::cout << "\t 0 | 1 | 2\n";
	std::cout << "\t ---------\n";
	std::cout << "\t 3 | 4 | 5\n";
	std::cout << "\t ---------\n";
	std::cout << "\t 6 | 7 | 8\n\n";

	std::cout << "Let the game begin!\n\n";
}

void GenerateMap(std::vector<char>& board) /*Vincent*/
{
	int SizeBoard = SIZE_MAX_BOARD;

	board.resize(SizeBoard);

	Instructions();

	for (int i = 0; i < SizeBoard; i++)
	{
		board[i] = ' ';
	}
}

void ShowMap(const std::vector<char>& board) /*Vincent*/
{
	std::cout << "\n\t" << board[0] << " | " << board[1] << " | " << board[2];
	std::cout << "\n\t---------";
	std::cout << "\n\t" << board[3] << " | " << board[4] << " | " << board[5];
	std::cout << "\n\t---------";
	std::cout << "\n\t" << board[6] << " | " << board[7] << " | " << board[8] << "\n\n";
}

void SetNewPosition() /*Gael*/
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

void CheckWin() /*Gael*/
{ 
	bool winner = true;
	while (winner(board) && round != 9);
	system("cls");

	playerNumber = playerNumber % 2 + 1;
	if (winner(board))
		std::cout << "the player " << playerNumber << " as win the game.\n\n";
	else
		std::cout << "the game is a egality !\n\n";
}

void PlayGame(std::vector<char>& board) /* Vincent */
{
	bool winner = false;

	while (!winner)
	{
		SetNewPosition();

		ShowMap(board);

		CheckWin();
	}
}

int main()
{

	std::vector<char> board;

	GenerateMap(board);

	//PlayGame(board);


	system("pause");
	return EXIT_SUCCESS;
}