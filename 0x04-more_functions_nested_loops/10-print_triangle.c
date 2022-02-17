#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: size of the triangle
 * Return: void
 */
void print_triangle(int size)
{
	int spaces, hash, rows;

	if (size == 0)
	{
		_putchar('\n');
	}
	for (rows = 1; rows <= size; rows++)
	{
		spaces = size - rows;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		hash = rows;
		while (hash > 0)
		{
			_putchar('#');
			hash--;
		}
		_putchar('\n');
	}
	_putchar('\n');
}

