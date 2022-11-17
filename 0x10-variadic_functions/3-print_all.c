#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * _printchar - function that prints char type element from va_list
 *
 * @list_args : va_list element passed to the function
 */
void _printchar(va_list list_args)
{
	printf("%c", va_arg(list_args, int));
}


/**
 *  _printint - function that prints int type element from va_list
 *
 *  @list_args : va_list element passed to the function
 */
void _printint(va_list list_args)
{
	printf("%d", va_arg(list_args, int));
}

/**
 * _printfloat - function that prints float type element from va_list
 *
 * @list_args : va_list element passed to the function
 */
void _printfloat(va_list list_args)
{
	printf("%f", va_arg(list_args, double));
}

/**
 * _printstring - function that prints string element from va_list
 *
 * @list_args : va_list element passed to the function
 */
void _printstring(va_list list_args)
{
	char *str;

	str = va_arg(list_args, char *);

	if (str == NULL)
	{
		str = "(nil)";
		return;
	}

	printf("%s", str);
}

/**
 * print_all - function that prints anything
 *
 * @format :  list of types of arguments passed to the function
 *
 */

void print_all(const char * const format, ...)
{
	unsigned int x, y = 0;
	va_list arguments;
	char *separator = "";

	datatype choice[] = { { 'c', _printchar},
		{ 'i', _printint},
		{ 'f', _printfloat},
		{ 's', _printstring},
		{'\0', NULL} };

	va_start(arguments, format);

	while (format != NULL && format[y] != '\0')
	{
		x = 0;
		while (choice[x].type != '\0')
		{
			if (choice[x].type == format[y])
			{
				printf("%s", separator);
				choice[x].func(arguments);
				separator = ", ";
			}
			x++;
		}
		++y;
	}
	va_end(arguments);
	printf("\n");
}
