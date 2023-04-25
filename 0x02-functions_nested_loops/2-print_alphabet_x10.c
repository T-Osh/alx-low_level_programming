#include "main.h"

/**
 * print_alphabet_x10 - prints the lowercase alphabets 10 times.
 */
void print_alphabet_x10(void)
{
	int count;
	char lwa;

	for (count = 1; count <= 10; count++)
	{
		for (lwa = 'a'; lwa <= 'z'; lwa++)
		{
			_putchar(lwa);
		}
		_putchar('\n');
	}
}
