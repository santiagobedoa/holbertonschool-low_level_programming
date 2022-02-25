#include "mian.h"

/**
 * print_number - prints an integer
 * @n: integer to be printed
 * Return: void
 */

void print_number(int n)
{
	int aux;
	int num = n;
	int i = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n
	}
	while (n)
	{
		while (n > 0)
		{
			n = n / 10;
			i++;
		}
		_putchar(n);
		while (i != 1)
		{
			n = n * 10;
			i--;
		}
		n = num - n;
	}
}

