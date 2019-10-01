#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

void Instructions() /*Vincent*/
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
	int SizeBoard = 9;

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

void SetNewPosition(std::vector<char>& board, char player)
{
	int indexBoard = 0;
	bool isLegal = false;  //this will determine if the case the player wants to place his piece is already taken or not

	while (!isLegal)
	{
		std::cout << "Please make a move, player " << player << "\n";
		std::cin >> indexBoard;

		if (board[indexBoard] != ' ')
		{
			std::cout << "Please choose another case, this one is already taken.\n";
		}
		else
		{
			board[indexBoard] = player;
			
			isLegal = true;
		}
	}
}

void CheckWin(std::vector<char>& board, bool& winner, char player)
{
	int isFull = 0;
	//the next three variables will test every possibility of win by rows, colums and diagonal
	bool winningRow = (board[0] == player && board[1] == player && board[2] == player)
						|| (board[3] == player && board[4] == player && board[5] == player)
						|| (board[6] == player && board[7] == player && board[8] == player);

	bool winningColumn = (board[0] == player && board[3] == player && board[6] == player)
						|| (board[1] == player && board[4] == player && board[7] == player)
						|| (board[2] == player && board[5] == player && board[8] == player);

	bool winningDiagonal = (board[0] == player && board[4] == player && board[8] == player)
							|| (board[2] == player && board[4] == player && board[6] == player);

	for (int i = 0; i < board.size(); i++)
	{
		if (board[i] != ' ')
		{
			isFull++;
		}
	}

	if (isFull == board.size() && !(winningRow || winningColumn || winningDiagonal))
	{
			std::cout << "This is a tie!\n";

			winner = true;
	}
	else if ((winningRow || winningColumn || winningDiagonal))
	{
		std::cout << "Player " << player << " wins!\n";

		winner = true;
	}
	

}

void PlayGame(std::vector<char>& board) /* Vincent */
{
	bool winner = false;

	ShowMap(board);

	while (!winner)
	{
		SetNewPosition(board, 'X');

		ShowMap(board);

		CheckWin(board, winner, 'X');

		if (!winner) //the if will stop the code from asking the second player to play if the first wins
		{
			SetNewPosition(board, 'O');

			ShowMap(board);

			CheckWin(board, winner, 'O');

		}

	}
}