#include "main.h"

/**
 * _islower - checks for the lowercase characters
 *
 *@c: character to be checked
 *
 * Return: 1 if c is lower and 0 if c is otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
