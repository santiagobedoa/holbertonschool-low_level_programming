#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - init
 * Return: 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n < 0)
	{
	    printf ("%lu is negative", n);
	}
	else {
	    printf("%lu is positive", n)
	}

	return (0);
}