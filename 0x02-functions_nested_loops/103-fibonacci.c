#include <stdio.h>

/**
 * main - Entry point, Fibonacci sequence terms not exceeding 4000000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int n, a = 1, b = 2, sum = 0, finSum = 0;

	for (n = 0; n < 49; n++)
	{
		if ((b % 2 == 0) && (b <= 4000000))
		{
			finSum = finSum + b;
		}
		sum = a + b;
		a = b;
		b = sum;

	}
	printf("%ld\n", finSum);
	return (0);
}
