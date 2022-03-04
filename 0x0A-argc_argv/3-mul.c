#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: arguments count
 * @argv: argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int res;

	if (argc == 0)
	{
		printf("Error");
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
	}
	return (0);
}
