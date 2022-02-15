#include <stdio.h>

/**
 * print_to_98 - prints al natural numbers from a to 98.
 * @a: limit
 * Return: 0
 */

void print_to_98(int a)
{
	if (a < 98)
	{
		while (a <= 98)
		{
			printf("%d, ", a);
			a++;
		}
	}
	else if (a > 98)
	{
		while (a >= 98)
		{
			printf("%d, ", a);
			a--;
		}
	}
	putchar('\n');
}

