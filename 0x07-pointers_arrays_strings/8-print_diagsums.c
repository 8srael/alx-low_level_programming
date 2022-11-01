#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sums of the two diagonals of a square matrix
 *
 * @a : pointer to start of matrix
 * @size : matrix width
*/

void print_diagsums(int *a, int size)
{
	int i, j;
	int left = 0, right = 0, diag_pos;

	for (i = 0 ; i < size ; i++)
	{
		diag_pos = (i * size) + i;
		left += *(a + diag_pos);
	}
	for (j = 0 ; j < size ; j++)
	{
		diag_pos = (j * size) + (size - 1 - j);
		right += *(a + diag_pos);
	}

	printf("%i, %i\n", l, r);
}
