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
	char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return(s);
	}
	if (c == '\0')
		return(s);

	return(NULL);
}
