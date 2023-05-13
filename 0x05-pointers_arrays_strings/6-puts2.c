#include "main.h"
/**
 * puts2 - a function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: char
 * Return: 0 is success
 */
void puts2(char *str)
{
	int a_string;

	for (a_string = 0; str[a_string] != '\0'; a_string++)
	if (a_string % 2 == 0)
		_putchar(str[a_string]);
	_putchar('\n');
}
