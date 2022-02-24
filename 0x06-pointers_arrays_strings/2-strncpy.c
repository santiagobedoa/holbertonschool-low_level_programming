#include "main.h"

/**
 * *_strncpy - copies a string
 * @dest: destination of the copied string
 * @src: source of the string
 * @n: number of characters to be copied
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (i < n)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	return (dest);
}

