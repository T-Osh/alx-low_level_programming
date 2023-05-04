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
	int tmp;

	n = n - 1;

	while (i < n)
	{
		tmp = a[i];
		a[i] = a[n];
		a[n] = tmp;
		i++;
		n--;
	}
}
