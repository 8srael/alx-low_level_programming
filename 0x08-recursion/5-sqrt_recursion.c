#include "main.h"

/**
 * square_root - gives the square root of n
 *
 * @root : an integer
 * @result : an integer
 *
 * Return: natural square root, or -1 if not
 */
int square_root(int root, int result)
{
	if (root * root > result)
		return (-1);
	if (root * root == result)
		return (root);

	return (square_root(root + 1, result));
}

/**
 * _sqrt_recursion - calculates the squrqre root
 *
 * @n : an integer
 *
 * Return: value of the square root of n
 * -1 if n doesn't have a natural square root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (square_root(0, n));
}
