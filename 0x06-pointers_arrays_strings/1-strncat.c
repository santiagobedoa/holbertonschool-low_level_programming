#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @dest: destination of concatenated str
 * @src: string
 * @n: number of latters of src that will be concatenated
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n)
	{
		if (j > sizeof(src))
		{
			break;
		}
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

