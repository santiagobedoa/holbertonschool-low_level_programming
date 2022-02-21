#include "main.h"

/**
 * *_strcpy - copies a str from src to dest
 * @src: source of the str
 * @dest: destination of the str
 * Return: copied str
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*(src + i))
	{
		*(dest + i) = src[i];
		i++;
	}
}

