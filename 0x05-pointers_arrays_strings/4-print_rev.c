#include "main.h"

/**
 * print_rev - prints a string in reverse followded by a new line
 * @s: str to be processed
 * Return: void
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (; len >= 0; len--)
	{
		putchar(s[len]);
	}
	putchar('\n');
}

