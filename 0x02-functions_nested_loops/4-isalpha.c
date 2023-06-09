#include "main.h"

/**
 * _isalpha - Checks for lowercase and uppercase Alphabets.
 *
 * @c: The character to be checked.
 *
 * Return: 1 if character is an Alphabet, 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
