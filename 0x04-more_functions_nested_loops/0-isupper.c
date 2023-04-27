#include "main.h"

/**
 * _isupper - checks code for Uppercase Alphabets
 *
 * @c: character to be checked
 *
 * Return: 1 Success, 0 not Uppercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
