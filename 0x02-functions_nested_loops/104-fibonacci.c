#include <stdio.h>

/**
 * main - Entry point, the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long int m, n, o, a, b, c, d;

	n = 1;
	o = 2;

	printf("%lu", n);

	for (m = 1; m < 91; m++)
	{
		printf(", %lu", o);
		o = o + n;
		n = o - n;
	}

	a = n / 1000000000;
	b = n % 1000000000;
	c = o / 1000000000;
	d = o % 1000000000;

	for (m = 92; m < 99; ++m)
	{
		printf(", %lu", c + (d / 1000000000));
		printf("%lu", d % 1000000000);
		c = c + a;
		a = c - a;
		d = d + b;
		b = d - b;
	}

	printf("\n");

	return (0);
}
