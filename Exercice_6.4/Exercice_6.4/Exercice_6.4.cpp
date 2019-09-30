#include <iostream>
#include <vector>
#include <algorithm>

#define SIZE_MAX_BOARD 9;

/*	�crire une fonction void GenerateMap() qui remplit une fois la map avec un char pour repr�senter que les cases sont vide

	Cr�er une fonction  ShowMap() qui affiche la carte � son �tat actuel

	Cr�er une fonction SetNewPosition(), elle demande au player une position et mets � jours la map

	Cr�er une fonction void CheckWin() v�rifie s�il y a un pattern gagnant sur la map

	Cr�er une fonction void PlayGame() (appel ShowMap & SetNewPosition())

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

void GenerateMap(std::vector<char>& board) /*Vincent*/
{
	int SizeBoard = SIZE_MAX_BOARD;

	board.resize(SizeBoard);

	for (int i = 0; i < SizeBoard; i++)
	{
		board[i] = ' ';
	}
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
	std::vector<char> board;

	Instructions();

	GenerateMap(board);


	system("pause");
	return EXIT_SUCCESS;
}