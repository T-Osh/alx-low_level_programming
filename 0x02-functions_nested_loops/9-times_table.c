#include "main.h"

/**
 * times_table - Prints the 9 times table from 0.
 */
void times_table(void)
{
	int num, num2, prod;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * num2;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + '0');

			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
