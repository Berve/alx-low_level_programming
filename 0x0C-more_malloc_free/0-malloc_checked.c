#include "main.h"

/**
 * malloc_checked - a function to cause normal
 * process termination with a status value of 98
 * @b: the allocated memory
 * Return: to return a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);

}
