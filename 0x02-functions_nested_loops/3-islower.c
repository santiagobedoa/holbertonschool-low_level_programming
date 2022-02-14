#include <stdio.h>
#include <ctype.h>

/**
 * main - init
 * Return: 1 if true, 0 otherwise
 */

int _islower(int c)
{
	if (islower(c)) {
		return (1);
	}
	else {
		return (0);
	}
}

