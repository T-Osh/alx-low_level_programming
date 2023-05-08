#include "main.h"

/**
 * *_strchr - locates character in a string
 *
 * @c: character
 *
 * @s: string
 *
 * Return: pointer to c in s or NULL
 *
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);

		}
		else
			s++;
	}
	if (*s == c)
		return (s);
	else
		return (0);
}
