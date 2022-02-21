#include "main.h"

/**
 * print_rev - prints a string in reverse followded by a new line
 * @s: str to be processed
 * Return: void
 */

void print_rev(char *s)
{
	char rev[];
	int len;

	while (s[len] != '\0')
	{
		len++;
	}
	for (len; len >= 0; len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}

