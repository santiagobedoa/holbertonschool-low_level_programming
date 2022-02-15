#include <stdio.h>

/**
 * main - init
 * Return: int
 */

void main(void)
{
	int weighted_sum;
	int counter;

	for (counter = 1; counter <= 1023; counter++)
	{
		if ((counter % 3) == 0 || (counter % 5) == 0)
		{
			weighted_sum = weighted_sum + counter;
		}
	}
	printf("%d", weighted_sum);
	putchar('\n');
}

