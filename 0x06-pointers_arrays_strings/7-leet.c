#include "main.h"

/**
 * leet - a function that encodes a string into 1337.
 * @s: string
 * Return: &s
 */
char *leet(char *s)
{
	int a, b;
	char i[] = "aAeEoOtTlL";
	char j[] = "4433007711";

	for (a = 0; *(s + a); a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (i[b] == s[a])
				s[a] = j[b];
		}
	}
	return (s);
}
