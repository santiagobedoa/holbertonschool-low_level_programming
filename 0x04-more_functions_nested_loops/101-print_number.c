#include "main.h"

/**
 * print_number - print an int
 * @n: int to be printed
 * Return: 0
 */

void print_number(int n)
{
	unsigned int num = n;

	if (num < 0)
	{
		putchar('-');
		num = -num;
	}
	if (num / 10)
	{
		print_number(num / 10);
	}
	putchar((num % 10) + '0');
}

