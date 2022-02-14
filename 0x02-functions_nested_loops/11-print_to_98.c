#include <stdio.h>

/**
 * main - init
 * Return: 0
 */

void print_to_98(int);

int main(void)
{
	print_to_98(0);
	print_to_98(125);
	return (0);
}

void print_to_98(int a)
{
	if (a < 98) {
		while (a <= 98) {
			printf("%d, ", a);
			a++;
		}
	} else if (a > 98) {
		while (a >= 98) {
			printf("%d, ", a);
			a--;
		}
	}
	putchar('\n');
}

