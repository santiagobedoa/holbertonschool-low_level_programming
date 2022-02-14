#include <stdio.h>

/**
 * main - init
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

