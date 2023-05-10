#include "main.h"
/**
* is_prime_number - prints prime number
*
* @n: the number to check
*
* Return: true if the number is prime
*
*/
int is_prime_number(int n)
{
	int start = n / 2;

	if (n <= 1)
		return (0);
	return (is_prime(n, start));
}
/**
 * is_prime - calculates prime recursively
 *
 * @n: number
 *
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (is_prime(n, i - 1));
}
