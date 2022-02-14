#include <stdio.h>

/**
 * main - init
 * Return: void
 */

void main(void)
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

