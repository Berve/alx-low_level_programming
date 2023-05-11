#include "main.h"
#include <stdio.h>

/**
 * factorial - function that returns the factorial of a given number.
 * Return: -1 or 1
 */

int factorial(int n)
{
	int n;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
