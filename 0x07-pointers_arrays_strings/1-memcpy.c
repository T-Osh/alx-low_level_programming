#include "main.h"

/**
 * *_memcpy -  copies n bytes from src to dest
 *
 * @dest: destination memory area
 *
 * @src: source memory area
 *
 * @n: bytes to be copied
 *
 * Return: pointer to dest
 *
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

	return (dest);
}
