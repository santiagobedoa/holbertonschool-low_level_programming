#include "main.h"
#include <string.h>
#include <limits.h>

/**
 * _atoi - convert str to int
 * @s: str to be processed
 * Return: integer
 */

int _atoi(char *s)
{
	int len_str = strlen(s);
	int i = 0;
	int sign = 0;
	int res = 0;

	while (i <= len_str)
	{
		if (s[i] == '-')
		{
			sign++;
		}
		if (s[i] >= '0' && s[i] <= '9')
		{
			res = (res * 10) + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				break;
			}
		}
		i++;
	}
	if (sign % 2 != 0)
	{
		res = -res;
	}
	return (res);
}

