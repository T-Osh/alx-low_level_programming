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
	int a;

	for (a = 0; (s[a] != c) &&
	(s[a] != '\0'); a++);

	if (s[a] == c)
		return (s + a);
	else
		return (NULL);
}
