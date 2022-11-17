#ifndef VARIADIC_FUNCTIONS_H_
#define VARIADIC_FUNCTIONS_H_

#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void _printchar(va_list list);
void _printstring(va_list list);
void _printfloat(va_list list);
void _printint(va_list list);

/**
 * struct datatype - struct
 *
 * @type: data type represents by a letter
 * @func: function ptr
 */
typedef struct datatype
{
	char *type;
	void (*func)();
} datatype;
#endif

