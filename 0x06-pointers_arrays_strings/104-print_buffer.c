#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints buffer
 *
 * @b: buffer
 *
 * @size: size of buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int i, j;
	unsigned char c;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				printf("%02x", b[j]);

			else
				printf("  ");

			printf(" ");
		}
		for (j = i; j < i + 10; j++)
		{
			if (j < size)
				c = b[j];

				if (c < 32 || c > 126)
					printf(".");

				else
					printf("%c", c);

		else
			break;
		}
		printf("\n");
	}
}
