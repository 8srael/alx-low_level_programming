#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _power - function that calculates (base and power)
 *
 * @b : base
 * @p : power
 *
 * Return: value of base and power
 */

unsigned long int _power(unsigned int b, unsigned int p)
{
	unsigned long int number = 1;
	unsigned int i;

	for (i = 1 ; i <= p; i++)
		number *= b;

	return (number);
}

/**
 * print_binary - prints the binary representation of a number
 *
 * @n: number
 *
 */

void print_binary(unsigned long int n)
{
	unsigned long int x, result;
	char flag = 0;

	x = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (x != 0)
	{
		result = n & x;
		if (result == x)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || x == 1)
		{
			_putchar('0);
		}

		x >>= 1;
	}
}
