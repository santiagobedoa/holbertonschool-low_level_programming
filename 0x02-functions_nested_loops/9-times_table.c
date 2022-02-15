#include "main.h"

/**
 * times_table - prints 9 times table
 * Return: 0
 */

void times_table(void)
{
	int a;
	int b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		putchar('0');
		for (b = 1; b <= 9; b++)
		{
			putchar(',');
			putchar(' ');
			c = a * b;
			if (c <= 0)
			{
				putchar(' ');
			}
			printf("%d", c);
		}
	}
	putchar('\n');
}

