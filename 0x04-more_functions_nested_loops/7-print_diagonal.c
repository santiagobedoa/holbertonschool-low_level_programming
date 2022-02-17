#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times
 */

void print_diagonal(int n)
{
	int rows;
	int spaces;

	if (n > 0)
	{
		for (rows = 1; rows <= n; rows++)
		{
			spaces = 1;
			while (spaces != rows)
			{
				putchar(' ');
				spaces++;
			}
			putchar('\\');
			putchar('\n');
		}
	}
	else
	{
		putchar('\n');
	}
}

