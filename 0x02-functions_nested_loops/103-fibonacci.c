#include <stdio.h>
#include <stdlib.h>
#define n 4000000

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	unsigned long num1 = 0;
	unsigned long num2 = 1;
	unsigned long r;
	unsigned long sum = 0;

	while (r <= n)
	{
		if ((r % 2) == 0)
		{
			sum += r;
		}
		r = num1 + num2;
		num1 = num2;
		num2 = r;
	}
	printf("%lu", sum);
	putchar('\n');
	return (0);
}

