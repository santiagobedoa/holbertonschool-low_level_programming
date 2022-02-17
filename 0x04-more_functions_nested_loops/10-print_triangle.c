#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * Return: void
 */

void print_triangle(int size)
{
	int spaces;
	int hash;
	int rows;

	if (size == 0)
	{
		putchar('\n');
	}
	for (rows = 1; rows <= size; rows++)
	{
		spaces = size - rows;
		while (spaces > 0)
		{
			putchar('-');
			spaces--;
		}
		hash = rows;
		while (hash > 0)
		{
			putchar('#');
			hash--;
		}
		putchar('\n');
	}
}

