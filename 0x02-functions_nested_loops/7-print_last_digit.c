#include "main.h"

/**
 * print_last_digit - print the last digit of ant integer
 * @n: integer to be processed
 * Return: las digit of a number
 */

int print_last_digit(int n)
{
	int a = (n % 10);

	if (a < 0)
	{
		a = (a * -1);
		_putchar(a + '0');
		return (a);
	}
	else
	{
		_putchar(a + '0');
		return (a);
	}
}

