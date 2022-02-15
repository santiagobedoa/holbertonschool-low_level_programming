#include "main.h"

/**
 * _islower - c is a latter
 * Return: 1 if c is lower case, 0 otherwise
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

