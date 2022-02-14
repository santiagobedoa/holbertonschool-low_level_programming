#include <stdio.h>

/**
 * main - init
 * Return: 0
 */

void print_alphabet_x10(void);

int main(void)
{
	print_alphabet_x10();
	return (0);
}

void print_alphabet_x10(void)
{
	char a;
	int counter;

	for (counter = 0; counter <= 9; counter++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			putchar(a);
		}
		putchar('\n');
	}
}
