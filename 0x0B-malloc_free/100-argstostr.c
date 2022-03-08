#include "main.h"

/**
 * argstostr - concatenates all the args
 * @ac: argument count
 * @av: argument vector
 * Return: pointer to a str
 */

char *argstostr(int ac, char **av)
{
	int i = 0;
	int j = 0;
	int size = 0;
	int index = 0;
	char *arr;

	if (ac == 0 || !av)
	{
		return (NULL);
	}
	for (; i < ac; i++)
	{
		for (; av[i][j]; j++)
		{
			size++;
		}
	}
	size += ac;
	arr = malloc(sizeof(char) * size + 1);
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			arr[index] = av[i][j];
			index++;
		}
		if (arr[index] == '\0')
		{
			arr[index++] = '\n';
		}
	}
	return (arr);
}

