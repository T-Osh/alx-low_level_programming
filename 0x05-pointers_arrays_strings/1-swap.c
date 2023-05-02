#include "main.h"

/**
 * swap_int - swap function
 *
 * @a: integer value to be swapped
 *
 * @b: integer to be swapped
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
