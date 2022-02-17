#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 * @n: number of times
 */

void print_diagonal(int n)
{
	int spaces;

	if (n <= 0)
	{
		while (n != 1)
		{
			_putchar(' ');
			n--;
		}
		_putchar('\\');
	}
	_putchar('\n');
}

