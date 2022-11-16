#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds two numbers
 *
 * @a : first number
 * @b : second number
 *
 * Return: sum of a & b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substracts two numbers
 *
 * @a : first number
 * @b : second number
 *
 * Return: sub of a & b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - products two numbers
 *
 * @a : first number
 * @b : second number
 *
 * Return: product of a & b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 *
 * @a : first number
 * @b : second number
 *
 * Return: result of the division of a by b
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - get remainder of the division of 2 numbers
 *
 * @a : first number
 * @b : second number
 *
 * Return: remainder of division of a by b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
