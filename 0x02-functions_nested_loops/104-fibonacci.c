#include <stdio.h>

/**
 * main - Entry point, the first 98 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nex;
	unsigned long fib = 0, fib1 = 1, add;
	unsigned long fib_p, fib_p1, fib1_p, fib1_p1;
	unsigned long p1, p2;

	for (nex = 0; nex < 92; nex++)
	{
		add = fib1 + fib2;
		printf("%lu, ", add);

		fib1 = fib2;
		fib2 = add;
	}

	fib_p = fib / 10000000000;
	fib1_p = fib1 / 10000000000;
	fib_p1 = fib % 10000000000;
	fib1_p1 = fib1 % 10000000000;

	for (nex = 93; nex < 99; nex++)
	{
		p1 = fib_p + fib1_p;
		p2 = fib_p1 + fib1_p1;
		if (fib_p1 + fib1_p1 > 9999999999)
		{
			p1 += 1;
			p2 %= 10000000000;
		}

		printf("%lu%lu", p1, p2);
		if (nex != 98)
			printf(", ");

		fib_p = fib1_p;
		fib_p1 = fib1_p1;
		fib1_p = p1;
		fib1_p1 = p2;
	}
	printf("\n");
	return (0);
}
