#include "main.h"

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
	unsigned long int dev, result;
	char flag = 0;

	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		result = n & dev;
		if (result == dev)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
