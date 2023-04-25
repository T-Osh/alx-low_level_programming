#include "main.h"
#include <unistd.h>

/**
 * main - check the code for putchar
 *
 * Return: Always 1 (Succes)
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}
