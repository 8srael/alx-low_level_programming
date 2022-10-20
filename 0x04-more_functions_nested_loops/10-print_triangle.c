#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line.
 *
 * @size : size of the triangle
*/

void print_triangle(int size)
{
	int x;
	int y;
	int z;

	if (size > 0)
	{
		for (z = 1 ; z < size + 1 ; z++)
		{
			for (x = 1 ; x < size - z + 1 ; x++)
				_putchar(' ');
			for (y = 1 ; y < z + 1 ; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
