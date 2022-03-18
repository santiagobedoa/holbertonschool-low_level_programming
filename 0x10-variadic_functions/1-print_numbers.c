#include "variadic_functions.h"

/**
 * print_numbers - print numbers
 * @separator: is the string to be printed between numbers
 * @n: required argument
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list args;
	
	va_start(args, n);
	for (; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), separator);
	}
	putchar('\n');
	va_end(args);
}
