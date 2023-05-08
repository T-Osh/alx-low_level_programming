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
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return (NULL);
}
