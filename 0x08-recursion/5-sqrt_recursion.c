#include "main.h"

/**
* _sqrt_recursion - natural square root of a number
*
* @n: number to be used
*
* Return: the square root of n
*
*/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);

	return (_sqrt(0, n));
}

/**
 * _sqrt - find the natural
 *
 * @n: number
 *
 * @x: iterator
 *
 * Return: square root
 *
 */
int _sqrt(int n, int x)
{
	if (n > x / 2)
		return (-1);
	else if (n * n == x)
		return (n);

	return (_sqrt(x, n + 1));
}
