#include "function_pointers.h"

/**
 * print_name - a function to print name
 * @name: 1st parameter
 * @f: name of function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
