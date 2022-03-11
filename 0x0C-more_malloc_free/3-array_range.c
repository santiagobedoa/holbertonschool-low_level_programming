#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: inferior limit
 * @max: superior limit
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * max - min + 1);
	if (!arr)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min) && min <= max; i++, min++)
	{
		*(arr + i) = min;
	}
	return (arr);
}

