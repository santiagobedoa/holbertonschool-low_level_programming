#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated
 *           space in memory, which cointains a copy
 *           of the str given as a parameter.
 * @str: copy of the str
 * Return: pointer with the new space in memory
 */

char *_strdup(char *str)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * strlen(str));
	i = 0;
	while (i < strlen(str))
	{
		arr[i] = str[i];
		i++;
	}
	return (arr);
}

