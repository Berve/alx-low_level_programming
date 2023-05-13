#include "main.h"
/**
 * rev_string - a function that reverses a string.
 * _putchar - prints character
 * @s: char
 *Return: 0 is success
 */
void rev_string(char *s)
{
	int i = 0, j, k;
	char l;

	while (s[i] != '\0')
	{
		i++;
	}
	k = i - 1;
	for (j = 0; k >= 0 && j < k; k--, j++)
	{
		l = s[j];
		s[j] = s[k];
		s[k] = l;
	}
}
