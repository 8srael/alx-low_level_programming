#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that print a buffer
 *
 * @b: buffer to print
 * @size : buffer size
 */

void print_buffer(char *b, int size)
{
	int x;

	for (x = 0; x <= (size - 1) / 10 && size; x++)
	{
		printf("%08x: ", x * 10);

		if (x < size / 10)
			print_line(b, 9, x);
		else
			print_line(b, (size % 10) - 1, x);

		putchar('\n');
	}

	if (size == 0)
		putchar('\n');
}

/**
 * print_line - function that print size bytes of a buffer
 *
 * @b: buffer to print
 * @size : bytes of buffer to print
 * @line : line of buffer to print
 */

void print_line(char *b, int size, int line)
{
	int y, z;

	for (y = 0 ; y < 10 ; y++)
	{
		if (y < size + 1)
			printf("%02x", *(b + line * 10 + y));
		else
			printf("  ");
		if (y % 2 != 0)
			putchar(' ');
	}

	for (z = 0 ; z < size + 1 ; z++)
	{
		if (*(b + line * 10 + z) > 31 && *(b + line * 10 + z) < 127)
			putchar(*(b + line * 10 + z));
		else
			putchar('.');
	}
}
