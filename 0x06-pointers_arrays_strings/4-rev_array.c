#include "main.h"
/**
 * reverse_array -  a function that reverses the content of an array of integers.
 * @a: An array
 * @n: An integer
 * Return: void
 */
void reverse_array(int *a, int n)
{
int b, d;

for (b = 0; (b < (n - 1) / 2); b++)
	{
	d = a[b];
	a[b] = a[n - 1 - b];
	a[n - 1 - b] = d;
	}
}
