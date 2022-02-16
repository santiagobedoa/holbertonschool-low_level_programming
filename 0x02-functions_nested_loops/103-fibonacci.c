#include <stdio.h>
#include <stdlib.h>
#define n 4000000

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	unsigned long num1 = 1;
	unsigned long num2 = 1;
	unsigned long sum = 0;

	while (num1 <= n)
	{
		if ((num1 % 2) == 0)
		{
			sum += num1;
		}
		num1 = num1 + num2;
		num2 = num1 - num2;
	}
	printf("%lu", sum);
	putchar('\n');
	return (0);
}

