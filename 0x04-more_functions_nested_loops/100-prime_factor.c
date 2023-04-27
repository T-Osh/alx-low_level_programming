#include "main.h"
#include <stdio.h>

/**
 * main - checks code for largest prime factor
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n, pfac;

	n = 612852475143;
	for (pfac = 2; pfac <= n; pfac++)
	{
		if ((n % pfac) == 0)
		{
			n /= pfac;
			pfac--;
		}
	}
	printf("%ld\n", pfac);
	return (0);
}
