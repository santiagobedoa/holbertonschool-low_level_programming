#include "main.h"

/**
 * print_to_98 - prints al natural numbers from n to 98.
 * @n: limit
 * Return: 0
 */

void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", 98);
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			putchar(',');
			putchar(' ');
			printf("%d", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			putchar(',');
			putchar(' ');
			printf("%d", n);
			n--;
		}
	}
	putchar('\n');
}

