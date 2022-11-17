#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line
 *
 * @separator :  string to be printed between numbers
 * @n : numbers of integers passed to function
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list_args;


	va_start(list_args, n);

	for (x = 0 ; x < n ; x++)
	{
		printf("%d", va_arg(list_args, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list_args);
}
