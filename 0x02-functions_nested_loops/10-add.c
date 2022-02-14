#include <stdio.h>

/**
 * main - init
 * Return: 0
 */

int add(int, int);

int main(void)
{
	int n;

	n = add(89, 9);
	printf("%d", n);
	return (0);
}

int add(int a, int b)
{
	int c = a +b;
	return (c);
}

