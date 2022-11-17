#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - return the sum of all its parameters
 *
 * @n: number of extra params
 *
 * Return: sum of all numbers
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int x;
	va_list list_args;
	int sum_all = 0;

	va_start(list_args, n);

	for (x = 0 ; x <= n - 1 ; x++)
		sum_all += va_arg(list_args, int);

	va_end(list_args);

	return (sum_all);
}
