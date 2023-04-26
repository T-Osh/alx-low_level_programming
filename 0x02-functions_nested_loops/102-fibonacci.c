#include <stdio.h>

/**
 * main - Entry point, first 50 Fibonacci numbers starting with 1 and 2
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nex;
	unsigned long fib = 0, fib1 = 1, sum;

	for (nex = 0; nex < 50; nex++)
	{
		sum = fib + fib1;
		printf("%lu", sum);

		fib = fib1;
		fib1 = sum;

		if (nex == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
