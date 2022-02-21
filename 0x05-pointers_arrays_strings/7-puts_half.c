#include "main.h"
#include <string.h>

/**
 * puts_half - prins left half of a string
 * @str: string to be processed
 * Return: void
 */

void puts_half(char *str)
{
	int half;
	int i = 0;
	int size = strlen(str);

	if (size % 2 == 0)
	{
		half = size / 2;
		while (str[i] != '\0')
		{
			if (i > half)
			{
				putchar(str[i]);
			}
			i++;
		}
	}
	else
	{
		half = (size - 1) / 2;
		while (str[i] != '\0')
		{
			if (i > half)
			{
				putchar(str[i]);
			}
			i++;
		}
	}
	putchar('\n');
}

