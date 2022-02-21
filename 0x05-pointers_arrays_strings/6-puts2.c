#include "main.h"

/**
 * puts2 - print pairs
 * @str: string to be processed
 * Return: void
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		if (i % 2 == 0)
		{
			putchar(*(str + i));
		}
		i++;
	}
	putchar('\n');
}

