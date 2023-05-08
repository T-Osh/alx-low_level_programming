#include <std.io>
#include "main.h"

/**
 * print_diagsums - sum of the two diagonals
 *
 * @a: square matrix
 *
 * @size: size of matrix
 *
 * Return: void
 *
 */
void print_diagsums(int *a, int size)
{
	int i, j, sumd1 = 0, sumd2 = 0, st1, st2;

	for (i = 0; i <= (size - 1); i++)
	{
		step1 =  (size + 1) * i;
		sumd1 = sumd1 + *(a + st1);
	}

	for (j = 1; j <= size; j++)
	{
		st2 = (size - 1) * j;
		sumd2 = sumd2 + *(a + st2);
	}
	printf("%d, %d\n", sumd1, sumd2);
}
