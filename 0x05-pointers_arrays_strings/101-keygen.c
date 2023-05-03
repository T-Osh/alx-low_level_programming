#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point, checks the code
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int pw[100];
	int a, sum, n;

	sum = 0;

	srand(time(NULL));

	for (a = 0; a < 100; a++)
	{
		pw[a] = rand() % 78;
		sum += (pw[a] + '0');
		putchar(pw[a] + '0');
		if ((2772 - sum) - '0' < 78)
		{
			n = 2772 - sum - '0';
			sum += n;
			putchar(n + '0');
			break;
		}
	}

	return (0);
}
