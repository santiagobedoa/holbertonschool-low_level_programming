#include <stdio.h>

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	long num1 = 0;
	long num2 = 1;
	long r;
	long weighted_sum;

	while (r <= 4000000)
	{
		r = num1 + num2;
		num1 = num2;
		num2 = r;
		if ((r % 2) == 0)
		{
			weighted_sum = weighted_sum + r;
		}
	}
	printf("%ld", weighted_sum);
	putchar('\n');
}

