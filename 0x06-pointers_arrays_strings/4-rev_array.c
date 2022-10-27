#include "main.h"

/**
 * reverse_array - function that reverses the content
 * of an array of integers.
 *
 * @a : array of int
 * @n : number of elements of the array
 *
*/

void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0 ; i < n / 2 ; i++)
	{
		tmp = *(a + i);
		*(a + i) = *(a + n - i - 1);
		*(a + n - i - 1) = tmp;
	}
}
