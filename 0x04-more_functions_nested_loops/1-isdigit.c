#include "main.h"
/**
 * _isdigit - checks for the numbers 0-9
 *
 *@c: character to be checked
 *
 * Return: 1 if c is between 0-9 and 0 if c is otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
