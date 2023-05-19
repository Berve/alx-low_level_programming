#include "main.h"

/**
 * _calloc - a function that allocates memory
 * for an array of @nmemb elements of @size bytes each
 * and returns a pointer to the allocated memory.
 * @nmemb: allocating memory for array
 * @size: allocating element of size bytes
 * Return: to return pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *a;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	a = malloc(nmemb * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		a[b] = 0;
	return (a);
}
