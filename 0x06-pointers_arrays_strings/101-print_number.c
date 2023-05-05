#include "main.h"

/**
 * print_number - prints an integer
 *
 * @n: integer
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	int div = 1;

	while (n / div >= 10)
	{
		div *= 10;
	}
	while (div > 0)
	{
		int digit = n / div;

		_putchar('0' + digit);

		n %= div;
		div /= 10;
	}
}
