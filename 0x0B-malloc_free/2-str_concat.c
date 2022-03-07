#include "main.h"

/**
 * str_concat - concatenate two strings
 * @s1: string one
 * @s2: string two
 * Return: pointer that points to a newly str
 */

char *str_concat(char *s1, char *s2)
{
	char *final_str;
	int i;
	int j;

	if (!s1 && !s2)
	{
		return (NULL);
	}
	final_str = malloc(sizeof(*s1) * strlen(s1) + sizeof(*s2) * strlen(s2));
	if (!final_str)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		final_str[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		final_str[i] = s2[j];
		i++;
		j++;
	}
	return (final_str);
}

