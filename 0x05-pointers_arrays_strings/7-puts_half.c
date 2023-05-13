#include "main.h"
/**
 * puts_half - a function that prints half of a string, followed by a new line.
 * @str: char
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int a_string = 0, b;

	while (str[a_string] != '\0')
		a_string++;
	if (a_string + 1 % 2 != '0')
		b = (a_string - 1) / 2;
	else
		b = (a_string / 2);
	b++;

	for (a_string = b; str[a_string] != '\0'; a_string++)
	_putchar(str[a_string]);
	_putchar('\n');
}
