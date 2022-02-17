#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of line that will be printed
 */

void print_line(int n)
{
	if (n <= 0)
	{
		while (n != 0)
		{
			_putchar('-');
			n--;
		}
	}
	_putchar('\n');
}

