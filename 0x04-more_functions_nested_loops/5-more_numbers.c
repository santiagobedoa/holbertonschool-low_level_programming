#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14 followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int a, b;

	for (b = 0; b < 10; b++)
	{
		for (a = 0; a <= 14; a++)
		{
			if (a >= 10)
			{
				putchar((a / 10) + '0');
			}
			putchar((a % 10) + '0');
		}
		putchar('\n');
	}
}

