#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by a new line
 *
 * @separator :  string to be printed between strings
 * @n : numbers of strings passed to function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int x;
	va_list list_args;
	char *one_str;

	va_start(list_args, n);

	for (x = 0 ; x < n ; x++)
	{
		one_str = va_arg(list_args, char*);

		if (one_str == NULL)
			printf("(nil)");
		else
			printf("%s", one_str);

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list_args);
}
