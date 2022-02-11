#include <stdio.h>

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	int a;
	int b = 1;

	for (a = '0'; a <= '9'; a++)
	{
		for (;b <= '9'; b++)
		{
			putchar(a);
			putchar(b);
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	putchar('\n');
	return (0);
}

