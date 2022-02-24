#include "main.h"

/**
 * reverse a content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int aux[n];
	int i;

	for (i = 0; i < n; i++)
	{
		aux[n - 1 - i] = a[i];
	}
	for (i = 0; i < n--; i++)
	{
		a[i] = aux[i];
	}
}

