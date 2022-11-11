#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 *
 * @min : an integer
 * @max : an integer
 *
 * Return: the pointer to the newly created array
*/

int *array_range(int min, int max)
{
	int *r_array;
	int i;

	if (min > max)
		return (NULL);

	r_array = malloc(sizeof(int) * (max - min + 1));

	if (r_array == NULL)
		return (NULL);

	for (i = 0 ; min < max + 1 ; i++)
	{
		*(r_array + i) = min;
		min++;
	}

	return (r_array);
}
