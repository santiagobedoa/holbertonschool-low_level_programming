#include <stdio.h>

/**
 * main - init
 * Return: 0
 */

int main(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		if (a == 'q' || a == 'e')
			continue;
		else
			putchar(a);
	putchar('\n');
	return (0);
}

