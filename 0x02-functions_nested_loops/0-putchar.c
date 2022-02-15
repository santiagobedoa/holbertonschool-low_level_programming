#include "main.h"

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	char _string[] = "_putchar";
	int counter = 0;

	while (_string[counter] != '\0')
	{
		_putchar(_string[counter]);
		counter++;
	}
	_putchar('\n');
	return (0);
}

