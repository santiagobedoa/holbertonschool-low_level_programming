#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to be allocated in memory
 * Return: pointer to the allocated memory
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *arr;

	arr = malloc(sizeof(unsigned int) * b);
	if (!arr)
	{
		exit(98);
	}

	return (arr);
}

