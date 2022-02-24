#include "main.h"

/**
 * *rot13 - encodes a string using rot13
 * @s: string to be encoded
 * Return: encoded string
 */

char *rot13(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'n')
		{
			*(s + i) += 13;
		}
		else if (*(s + i) >= 'A' && *(s + i) <= 'N')
		{
			*(s + i) += 13;
		}
		else if (*(s + i) >= 'n' && *(str + i) <= 'z')
		{
			*(s + i) -= 13;
		}
		else if (*(s + i) >= 'N' && *(str + i) <= 'Z')
		{
			*(s + i) -= 13;
		}
	}
	return (s);
}
