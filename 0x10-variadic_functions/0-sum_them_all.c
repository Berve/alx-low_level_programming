#include "variadic_functions.h"

/**
 * sum_them_all - a function that adds all the numbers
 * @n: number of parameters passed
 * Return: Always 0
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		va_end(ap);
		return (0);
	}

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
