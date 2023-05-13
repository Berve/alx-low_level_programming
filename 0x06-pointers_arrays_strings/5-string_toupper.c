#include "main.h"
/**
 * string_toupper - a function that changes all lowercase
 * letters of a string to uppercase.
 * @s: A string
 * Return: char
 */
char *string_toupper(char *s)
{

	int a;

	a = 0;

	while (*(s + a))
	{
		if (*(s + a) >= 'a' && *(s + a) <= 'z')
			*(s + a) -= 'a' - 'A';
		a++;
	}
	return (s);
}
