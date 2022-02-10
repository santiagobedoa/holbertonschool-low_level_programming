#include <stdio.h>

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long int li;
	long long int lli;
	float fl;
	
	printf("Size of a char: %lu\n", sizeof(c));
	printf("Size of a char: %lu\n", sizeof(i));
	printf("Size of a char: %lu\n", sizeof(li));
	printf("Size of a char: %lu\n", sizeof(lli));
	printf("Size of a char: %lu\n", sizeof(fl));
	return (0);
}
