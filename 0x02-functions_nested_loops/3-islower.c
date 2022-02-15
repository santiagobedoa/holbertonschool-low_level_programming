#include "main.c"

/**
 * _islower - init
 * Return: 1 if c is lower case, 0 otherwise
 */

int _islower(int c)
{
	if ('a' <= c <= 'z') {
		return (1);
	} else {
		return (0);
	}
}

