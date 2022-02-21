#include "main.h"

/**
 * puts_half - prins left half of a string
 * @str: string to be processed
 * Return: void
 */

void puts_half(char *str)
{
	int half;
	int i = 0;

	if (sizeof(str) % 2 == 0)
	{
		half = sizeof(str) / 2;
		while (str[i] != '\0')
		{
			if (i >= half)
			{
				putchar(str[i]);
			}
			i++;
		}
	}
	else
	{
		half = (sizeof(str) - 1) / 2;
		while (str[i] != '\0')
		{
			if (i >= half)
			{
				putchar(str[i]);
			}
			i++;
		}
	}
	putchar('\n');
}

