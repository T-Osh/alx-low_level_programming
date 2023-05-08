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
	int b;

	for (b = 0; (s[b] != c) && (s[b] != '\0'); b++)
		;
	if (s[b] == c)
		return (s + b);
	else
		return (NULL);
}
