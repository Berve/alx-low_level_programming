#include <stdio.h>
#include "main.h"

/**
 * _strlen - a function that returns the length of a string.
 * @a: character
 * Return: void
 */

int _strlen(char *p)
{
	int n = 0;

	for (; *p++;)
	n++;
	return (n);
}
