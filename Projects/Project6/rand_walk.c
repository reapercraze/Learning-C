/*************************************************
* Function Title: Main
*
* Summary: prints a 10x10 array of the computer randomly 
*			walking around it until it gets stuck
*
* Inputs: none
* Outputs: none
*
**************************************************
* Pseudocode
*
* Begin
*   Initialize board
*	While any direction is true
*		If up
*			If its a valid move
*				Assign letter
*		If right
*			If its a valid move
*				Assign letter
*		If down
*			If its a valid move
*				Assign letter
*		If left
*			If its a valid move
*				Assign letter
*		Reset letter incredment
*	Print the array to the screen
* End
*************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));

	int l = 1, d = 1, r = 1, u = 1;
	int i = 0, j = 0, direction;
	char board[10][10], letter;

	for (i = 0; i < 10; i++) // Initialize board
	{
		for (j = 0; j < 10; j++)
		{
			board[i][j] = '.';
		}
	}

	board[0][0] = 'A';
	letter = 'B';

	i = 0;
	j = 0;
	while ((l == 1) || (d == 1) || (u == 1) || (r == 1))
	{
		direction = (rand() % 4);
		
		if (direction == 0) // If left
		{
			--j;
			if ((j > -1) && (board[i][j] == '.')) // If its a valid move
			{
				board[i][j] = letter; // Assign letter
				letter++; 
				l = 1; 
			}
			else
			{
				l = 0;
				++j;
			}
		}
		
		if (direction == 1) // If down
		{
			++i;
			if ((i < 10) && (board[i][j] == '.'))// If its a valid move
			{
				board[i][j] = letter; // Assign letter
				letter++;
				d = 1;
			}
			else
			{
				d = 0;
				--i;
			}
		}

		if (direction == 2) // If right
		{
			++j;
			if ((j < 10) && (board[i][j] == '.')) // If its a valid move
			{
				board[i][j] = letter; // Assign letter
				letter++;
				r = 1;
			}
			else
			{
				r = 0;
				--j;
			}
		}

		if (direction == 3) // If up
		{
			--i;
			if ((i > -1) && (board[i][j] == '.')) // If its a valid move
			{
				board[i][j] = letter; // Assign letter
				letter++;
				u = 1;
			}
			else
			{
				u = 0;
				++i;
			}
		}

		if (letter == 91) // Reset letter incredment
		{
			letter = 'A';
		}

	}

	for (i = 0; i < 10; i++) // Print the array to the screen
	{
		for (j = 0; j < 10; j++)
		{
			printf(" %c", board[i][j]);
		}
		printf("\n");
	}

	return 0; // End
}