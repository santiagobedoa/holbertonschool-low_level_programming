#include "main.h"

/**
 * print_alphabet_x10 - print the alphabet 10 times
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char a;
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

