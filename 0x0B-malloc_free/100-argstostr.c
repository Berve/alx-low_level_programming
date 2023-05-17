#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function to concatenate all
 * the arguments of your program.
 * @ac: arguments count
 * @av: arguments vector
 *
 * Return: a pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av)
{
	char *string, *s;
	int a, j, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		s = av[a];
		j = 0;

		while (s[j++])
			len++;
		len++;
	}

	string = (char *)malloc(sizeof(char) * (len + 1));
	if (string == NULL)
		return (NULL);

	for (a = 0, j = 0; a < ac && j < len; a++)
	{
		s = av[a];
		k = 0;

		while (s[k])
		{
			string[j] = s[k];
			k++;
			j++;
		}
		string[j++] = '\n';
	}
	string[j] = '\0';

	return (string);
}
