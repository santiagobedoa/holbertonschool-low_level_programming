#include "main.h"

/**
 * *_strstr - locates a substring
 * @haystack: main str to be scanned
 * @needle: small str to be searched
 * Return: pointer to the first ocurrence or null if not present
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			return (&haystack[i]);
		}
	}
	return ('\0');
}

