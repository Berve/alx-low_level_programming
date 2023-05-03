#include "main.h"

/**
 * _atoi - a function that convert a string to an integer.
 * @s: The pointer to be converted
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;
	unsigned int nb = 0;
	int min = 1;
	int isi = 0;

	while (s[c])
	{
		if (s[c] == 45)
		{
			min *= -1;
		}

		while (s[c] >= 48 && s[c] <= 57)
		{
			isi = 1;
			nb= (nb* 10) + (s[c] - '0');
			c++;
		}

		if (isi == 1)
		{
			break;
		}

		c++;
	}

	nb *= min;
	return (nb);
}
