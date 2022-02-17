#include "main.h"

/**
 * print_square - prints a square
 * @size: size of the square
 */

void print_square(int size)
{
	int height = size;
	int width = size;

	if (size != 0)
	{
		for (height; height > 0; height--)
		{
			for (width; width > 0; width--)
			{
				putchar('#');
			}
			putchar('\n');
			width = size;
		}
	}
	else
	{
		putchar('\n');
	}
}

