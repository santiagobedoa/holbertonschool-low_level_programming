#include "main.h"

/**
 * *_strchr - locates a char in a str
 * @s: str to be scanned
 * @c: char to be searched in str
 * Return: pointer to the first occurrence of char c in s
 */

char *_strchr(char *s, char c)
{
	char match = s[0];
	int i = 0;

	while (s[i] != '\0')
	{
		if (match == c)
		{
			return (&s[i]);
		}
		else
		{
			i++;
			match = *(s + i);
		}
	}
	return (NULL);
}

