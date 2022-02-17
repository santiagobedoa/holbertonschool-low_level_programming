#include "main.h"

/**
 * more_numbers - prints 10 times the numbers from 0 to 14 followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	char a;
	char b;
	char c;
	char d;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b <= 9)
			{
				c = b; 
			}
			else
			{
				c = b % 10;
				d = b / 10;
				putchar(d + '0');
			}
			putchar(c + '0');
		}
		putchar('\n');
	}
}

