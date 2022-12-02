#include "main.h"
#include <stdio.h>

/**
 * set_bit -  function that sets the value of a bit to 1 at a given index.
 *
 * @n: pointer number to x
 * @index: starting from 0 to the bit that you want to set
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	x = 1 << index;
	*n = *n | x;

	return (1);

}
