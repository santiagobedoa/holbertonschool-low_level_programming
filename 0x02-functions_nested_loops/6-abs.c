#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * Return: absolute number
 */

int _abs(int n)
{
	int b;

	if (n < 0) {
		b = n * -1;
		return (b);
	} else {
		return (n);
	}
}

