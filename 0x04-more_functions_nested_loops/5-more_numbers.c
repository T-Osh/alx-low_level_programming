#include "main.h"

/**
 * more_numbers - prints the numbers 1-14
 *
 * Return: void
 */
void more_numbers(void)
{
	int count;
	int i;

	for (count = 1; count <= 10; count++)
	{
		for (i = 0; i <= 14; i++)
		{
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
