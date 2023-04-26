#include "main.h"

/**
 * print_last_digit - checks for the last digit of n
 *
 * @n: integer to be printed
 *
 * Return: the last digit of n
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit *= 1;
		_putchar (lastDigit + '0');

		return (lastDigit);
}
