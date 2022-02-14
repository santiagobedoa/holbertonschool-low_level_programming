#include <stdio.h>

/**
 * main - init
 * Return: 0
 */

void jack_bauer(void);

int main (void)
{
	jack_bauer();
	return (0);
}

void jack_bauer(void)
{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			putchar((h / 10) + '0');
			putchar((h % 10) + '0');
			putchar(':');
			putchar((m / 10) + '0');
			putchar((m % 10) + '0');
			putchar('\n');
		}
	}
}

