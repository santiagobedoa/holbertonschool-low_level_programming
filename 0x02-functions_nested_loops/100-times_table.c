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

	if (n <= 0 || n > 15)
	{
		putchar('\0');
	}
	else
	{
		for (a = 0; a <= n; a++)
		{
			putchar('0');
			for (b = 1; b <= n; b++)
			{
				putchar(',');
				putchar(' ');
				c = a * b;
				if (c <= 9)
				{
					putchar(' ');
					putchar(' ');
				}
				else if (c <= 99)
				{
					putchar(' ');
				}
				printf("%d", c);
			}
			putchar('\n');
		}
	}
}

