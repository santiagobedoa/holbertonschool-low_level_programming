#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	int num1 = 1;
	int num2 = 2;
	int r;
	int counter;

	for (counter = 0; counter <= 49; counter++)
	{
		if (counter == 49)
		{
			printf("%d", r);
			break;
		}
		else
		{
			r = num1 + num2;
			printf("%d, ", r);
			num1 = num2;
			num2 = r;
		}
	}
}

