#include "main.h"

/**
 * rot13 - a function that encodes a string using rot13.
 * @s: string
 * Return: s
 */
char *rot13(char *s)
{
	int a, b;
	char i[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char j[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (i[b] == *(s + a))
			{
				*(s + a) = j[b];
				break;
			}
		}
	}
	return (s);
}
