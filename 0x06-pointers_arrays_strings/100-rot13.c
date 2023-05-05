#include "main.h"

/**
 * rot13 - encodes string
 *
 * @str: the string to encode
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	char *rlt = str;

	for (; *str != '\0'; str++)
	{
		if ((*str >= 'a' && *str <= 'm') ||
				(*str >= 'A' && *str <= 'M'))
		{
			*str += 13;
		}
		else if ((*str >= 'n' && *str <= 'z') ||
				(*str >= 'N' && *str <= 'Z'))
		{
			*str -= 13;
		}
	}
	return (rlt);
}
