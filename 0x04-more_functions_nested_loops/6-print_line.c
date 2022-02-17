#include "main.h"

/**
 * print_line - draws a straight line
 * @n: number of line that will be printed
 * Return: void
 */

void print_line(int n)
{
	if (n >= 0)
	{
		while (n != 0)
		{
			putchar('_');
			n--;
		}
	}
	putchar('\n');
}

