#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the number to be checked
 * Return: 1 and prints + if n is greater than zero. 0 and prints 0 if n is zero. -1 and prints - if n is less than zero.
 */

int print_sign(int n)
{
	if (n > 0)
		printf("+, 1");
	else if ( n == 0)
		printf("0, 0");
	else
		printf("-, -1");
}

