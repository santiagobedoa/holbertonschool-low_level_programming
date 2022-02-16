#include <stdio.h>

/**
 * main - print first 50 fibonacci numbers
 * Return: 0
 */

int main(void)
{
	long num1 = 1;
	long num2 = 2;
	long r;
	int counter;

	for (counter = 0; counter <= 48; counter++)
	{
		if (counter == 48)
		{
			printf("%ld", r);
			break;
		}
		else if (num1 == 1 && num2 == 2)
		{
			printf("%ld, ", num1);
			printf("%ld, ", num2);
			r = num1 + num2;
			num1 = num2;
			num2 = r;
		}
		else
		{
			printf("%ld, ", r);
			r = num1 + num2;
			num1 = num2;
			num2 = r;
		}
	}
	putchar('\n');
	return (0);
}

