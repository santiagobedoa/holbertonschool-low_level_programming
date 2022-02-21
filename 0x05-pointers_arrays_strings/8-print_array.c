#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @a: array to be processed
 * @n: number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (*(a + i))
	{
		printf("%d", a[i]);
		i++;
		if (i - 1 =< n)
		{
			putchar(',');
			puthcar(' ');
		}
		else
		{
			break;
		}
	}
	putchar('\n');
}

