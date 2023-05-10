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
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (_sqrt(n, x + 1));
}
