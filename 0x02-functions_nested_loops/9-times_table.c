#include "main.h"

/**
 * times_table - prints 9 times table
 * Return: 0
 */

void times_table(void)
{
	int a;
	int b;
	int c;
	int counter;

	for (counter = 0; counter <= 8; counter++)
	{
		for (a = 0; a <= 9; a++)
        	{
                	for (b = 0; b <= 9; b++)
                	{
                        	c = a * b;
                        	printf("%d, ", c);
                	}
                	putchar('\n');
        	}
	
	}
}

