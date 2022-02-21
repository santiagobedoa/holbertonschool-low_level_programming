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
		if (*(str + i) % 2 == 0)
		{
			putchar(*(str + i));
		}
	}
	putchar('\n');
}

