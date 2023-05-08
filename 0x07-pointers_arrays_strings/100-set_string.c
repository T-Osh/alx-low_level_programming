#include "main.h"

/**
 * set_string - sets the value of a pointer
 *
 * @to: pointer value
 *
 * @s: pointer to pointer
 *
 * Return: void
 *
 */
void set_string(char **s, char *to)
{
	*s = to;
}
