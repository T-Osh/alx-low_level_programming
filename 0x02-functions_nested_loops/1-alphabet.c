#include "main.h"

/**
 * print_alphabet - Entry point, prints lowercase alphabets a - z
 */
void print_alphabet(void)
{
	char lwbet;

	for (lwbet = 'a'; lwbet <= 'z'; lwbet++)
		_putchar(lwbet);

	_putchar('\n');
}
