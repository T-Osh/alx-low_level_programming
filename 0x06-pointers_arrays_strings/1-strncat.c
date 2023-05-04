#include "main.h"

/**
 * *_strncat - copies the string
 *
 * @dest: destination pointer
 *
 * @src: source pointer
 *
 * @n: bytes to use from src
 *
 * Return: Destination
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != 0)
	{
		i++;
	}

	while (src[j] != 0 && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
