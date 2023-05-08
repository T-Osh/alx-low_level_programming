#include "main.h"

/**
 * _memset - fills first byte of memory area
 *
 * @s: memory area
 *
 * @b: constant byte
 *
 * @n: first byte of memory area to be filled
 *
 * Return: pointer to s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}

	return (s);
}
