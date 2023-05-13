#include <stdio.h>
#include "main.h"

/**
 * _strcat - a function that concatenates two strings.
 * @dest: A character
 * @src: A character
 * Return: i
 */
char *_strcat(char *dest, char *src)
{
	char *i = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (i);
}
