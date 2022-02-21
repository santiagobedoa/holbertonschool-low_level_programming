#include "main.h"

/**
 * rev_string - reverse a str
 * @s: str to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char reversed[(sizeof(s) / sizeof(char))];
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	for (; len >= 0; len--)
	{
		*(reversed + i) = s[len];
		i++;
	}
	s = reversed;
}

