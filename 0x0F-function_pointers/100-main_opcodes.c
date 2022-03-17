#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: zero if success
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int num_bytes = 0;
	char *ptr_main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_bytes = atoi(argv[1]);
	if (num_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr_main = &main;
	for (i = 0; i < num_bytes; i++)
	{
		printf("%02hhx", ptr_main[i]);
		if (i < num_bytes - 1)
		{
			printf(" ");
		}
		else
		{
			printf("\n");
		}
	}
	return (0);
}
