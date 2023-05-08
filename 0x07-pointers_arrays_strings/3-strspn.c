#include "main.h"

/**
 *  _strspn - gets the length of a prefix substring
 *
 *  @s: segment
 *
 *  @accept: bytes
 *
 *  Return: number of bytes in s from accept
 *
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int t, u;

	for (u = 0; *(s + u); u++)
	{
		for (t = 0; *(accept + t); t++)
		{
			if (*(s + u) == *(accept + t))
				break;
		}
	if (*(accept + t) == '\0')
		break;
	}
	return (u);
}
