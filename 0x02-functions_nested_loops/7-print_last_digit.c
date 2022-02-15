#include "main.h"

/**
 * print_last_digit - print the last digit of ant integer
 * @n: integer to be processed
 * Return: las digit of a number
 */

int print_last_digit(int n)
{
	if (n % 10 < 0)
	{
		return ((n % 10) * -1); 
	}
	else
	{
		return (n % 10);
	}
}

