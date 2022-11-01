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
	int len = 0;

	while ( **(a + len) != '\0')
		len++;

	for (i = 0 ; i < len - 1 ; i++)
	{
		for (j = 0 ; j < 8 ; j++)
			_putchar(a[i][j]);
		_putchar('\n');
	}
}
