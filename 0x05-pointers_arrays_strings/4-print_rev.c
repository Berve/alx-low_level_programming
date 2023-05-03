#include "main.h"

/**
* print_rev - a function that prints a string, in reverse, followed by a new line.
* @s: string to print
*/

void print_rev(char *s)
{
	int a, i;

	i = 0;
	while (s[i] != '\0')
		i++;

	for (a = i - 1; a >= 0; a--)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}
