#include "main.h"

/**
 * print_times_table - prints n times table
 * @n: number of times that table will be printed
 * Return: 0
 */

void print_times_table(int n)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= n; a++)
	{
		putchar('0');
		for (b = 1; b <= 9; b++)
		{
			putchar(',');
			putchar(' ');
			c = a * b;
			if (c <= 9)
			{
				putchar(' ');
			}
			printf("%d", c);
		}
		putchar('\n');
	}
}

