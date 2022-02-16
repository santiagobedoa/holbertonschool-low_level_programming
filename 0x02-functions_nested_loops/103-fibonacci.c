#include <stdio.h>
#include <stdlib.h>

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	long num1 = 0;
	long num2 = 1;
	long r;
	long sum = 0;

	while (r <= 4000000)
	{
		if ((r % 2) == 0)
		{
			sum += r;
		}
		r = num1 + num2;
		num1 = num2;
		num2 = r;
	}
	printf("%ld", sum);
	putchar('\n');
	return (0);
}

