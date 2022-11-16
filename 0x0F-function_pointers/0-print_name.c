#include "function_pointers.h"

/**
 * print_name - function that prints a name from a function pointer
 *
 * @name : a string
 * @f : function pointer that takes a string in param
 *
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
