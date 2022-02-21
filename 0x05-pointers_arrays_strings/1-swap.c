#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: value one
 * @b: value two
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int a_original = *a;
	int b_original = *b;

	*a = b_original;
	*b = a_original;
}

