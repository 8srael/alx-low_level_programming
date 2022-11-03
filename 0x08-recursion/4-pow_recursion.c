#include "main.h"

/**
 * _pow_recursion - calculates a pow of an number
 *
 * @x : an integer
 * @y : an integer
 *
 * Return: value of x raised by the power of y,
 * -1 if y is lower than 0
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);

	return (x * _pow_recursion(x, y - 1));
}
