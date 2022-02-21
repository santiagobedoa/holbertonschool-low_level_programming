#include "main.h"

/**
 * rev_string - reverse a str
 * @s: str to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	char original[256];
	int len = 0;
	int i = 0;

	while (s[len] != '\0')
	{
		*(original + len) = s[len];
		len++;
	}
	for (; len >= 0; len--)
	{
		*(s + i) = original[len];
		i++;
	}
}

