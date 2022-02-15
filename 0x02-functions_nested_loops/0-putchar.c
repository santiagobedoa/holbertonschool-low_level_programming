#include "main.h"

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	char a[] = "_putchar";
	int counter;

	while (a[counter] != '\0')
	{
		_putchar(a[counter]);
		counter++;
	}
	_putchar('\n');
	return (0);
}

