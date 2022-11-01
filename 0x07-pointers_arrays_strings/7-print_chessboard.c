#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - function that prints the chessboard.
 *
 * @a : a 2D array
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0 ; i < a[i][7] ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
