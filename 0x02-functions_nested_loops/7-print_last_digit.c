#include "main.h"
#include "6-abs.c"

/**
 * print_last_digit - prints the last digit of a number.
 * @number : number that we want to print his last digit.
 *
 * Return: value of the last digit of n.
*/

int print_last_digit(int number)
{
	int ld = number % 10;

	_putchar('0' + _abs(ld));
	return (_abs(ld));
}
