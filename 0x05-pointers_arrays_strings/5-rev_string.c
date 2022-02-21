#include "main.h"

/**
 * rev_string - reverse a str
 * @s: str to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char reversed[_strlen(*s)];
	int len;
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

