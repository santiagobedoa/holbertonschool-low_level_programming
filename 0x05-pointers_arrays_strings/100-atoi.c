#include "main.h"

/**
 * _atoi - convert str to int
 * @s: str to be processed
 * Return: integer
 */

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int r = 0;

	while (s[i] == ' ')
	{
		i++;
	}
	if (s[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		for (; s[i] != 0; i++)
		{
			r = r * 10 + s[i] - '0';
		}
	}
	return sign * r;
}

