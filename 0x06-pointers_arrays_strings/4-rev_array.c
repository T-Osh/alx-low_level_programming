#include "main.h"

/**
 * reverse_array - concatenates the strings
 *
 * @a: array
 *
 * @n: number of elements in the array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = b;
		i++;
	}
}
