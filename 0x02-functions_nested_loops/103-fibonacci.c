#include <stdio.h>

/**
 * main - Entry point, Fibonacci sequence terms not exceeding 4000000.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned long fib = 0, fib1 = 1, sum;
	float allsum;

	while (1)
	{
		allsum = fib + fib1;
		if (sum > 4000000)
			break;

		if ((sum % 2) == 0)
			allsum += sum;

		fib = fib1;
		fib1 = sum;
	}
	printf("%.0f\n", allsum);

	return (0);
}
