#include <stdio.h>

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
	    for (b = a + 1; b <= 9; b++)
	    {
	        printf("%d%d, ", a, b);
	    }
	}
	putchar('\n');
	return (0);
}

