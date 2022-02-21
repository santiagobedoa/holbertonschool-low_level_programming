#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies a str from src to dest
 * @src: source of the str
 * @dest: destination of the str
 * Return: copied str
 */

char *_strcpy(char *dest, char *src)
{
	strcpy(*src, *dest);
}

