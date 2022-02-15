#include "main.h"

/**
 * Function: _islower
 * ------------------
 * checks if a charcacter is lower case
 *
 * c: the character to be checked
 *
 * return: 1 if c is lower case, 0 otherwise
 */

int _islower(int c)
{
	if ('a' <= c && c <= 'z')
		return (1);
	else
		return (0);
}

