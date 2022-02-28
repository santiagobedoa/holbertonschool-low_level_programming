#include "main.h"

/**
 * print_chessboard - prints the chessboard
 * @a: board
 * Return: void
 */

void print_cheesboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

