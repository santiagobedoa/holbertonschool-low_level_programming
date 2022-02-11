#include <stdio.h>

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
		for (b = '1'; b <= '9'; b++)
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
	return (0);
}

