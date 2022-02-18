#include "main.h"

/**
 * print_number - print an int
 * @n: int to be printed
 * Return: 0
 */

void print_number(int n)
{
	long n = n;

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		print_number(n / 10);
	}
	putchar((n % 10) + '0');
}

