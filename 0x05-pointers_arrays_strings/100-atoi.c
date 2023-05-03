#include "main.h"

/**
 * _atoi - converts string to integer
 *
 * @s: string 
 *
 * Return: converted integer
 */

int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	unsigned int r = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		r = (r * 10) + (s[i] - '0');
		i++;
	}
	r *= sign;
	return (r);
}
