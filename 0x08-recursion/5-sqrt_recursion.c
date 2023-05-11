#include "main.h"
#include <stdio.h>

/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number.
 * _sqrt_recursion_aid - Second function
 * @n: Parameter
 * @start: starting value
 * @end: ending value
 * Return: -1 or 1
 */

int _sqrt_recursion_aid(int n, int start, int end)
{
	if (start > end)
	{
		return (-1);
	}

	int average = (start + end) / 2;

	if (average * average == n)
	{
		return (average);
	}
	else if (average * average > n)
	{
		return (_sqrt_recursion_aid(n, start, average - 1));
	}
	else
	{
		return (_sqrt_recursion_aid(n, average + 1, end));
	}
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_recursion_aid(n, 0, n));
}

