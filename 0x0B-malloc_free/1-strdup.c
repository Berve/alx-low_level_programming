#include "main.h"
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 * Return: a pointer to the duplicated string.
 * It returns NULL if memory available is insufficient
 */
char *_strdup(char *str)
{
	char *copy_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	copy_str = (char *)malloc((sizeof(char) * len) + 1);
	if (copy_str == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		copy_str[i] = str[i];
	copy_str[len] = '\0';

	return (copy_str);
}
