#include "main.h"

/**
 * *string_toupper - converts lowercase touppercase
 *
 * @s: alphabet to check
 *
 * Return: Uppercase alphabets
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
