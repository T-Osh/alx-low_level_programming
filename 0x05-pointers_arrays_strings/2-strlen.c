#include "main.h"

/**
 * _strlen - produces string length
 *
 * @s: string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len;

	len = 0;

	while (*s != '\0')
	{
		len++;
	}

	return (len);
}
