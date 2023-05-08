#include "main.h"

/**
 * *_strpbrk - locates the first occurrence s in accept
 *
 * @s: string
 *
 * @accept: contains byte
 *
 * Return: bytes in s == accept or  NULL
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
