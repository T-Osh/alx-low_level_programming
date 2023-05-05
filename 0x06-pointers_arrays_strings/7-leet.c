#include "main.h"
/**
 * *leet - encodes string
 *
 * @str: string to encode
 *
 * Return: encoded string
 */
char *leet(char *str)
{
	char lt[5][3] = {{'a', 'A', '4'},
		{'e', 'E', '3'},
		{'o', 'O', '0'},
		{'t', 'T', '7'},
		{'l', 'L', '1'}};

	int i, j, k;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			for (k = 0; k < 2; k++)
			{
				if (str[i] == lt[j][k])
				{
					str[i] = lt[j][2];
				}
			}
		}
	}

	return (str);
}
