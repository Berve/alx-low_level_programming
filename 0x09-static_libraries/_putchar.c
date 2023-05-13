#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: First parameter
 * Return: 1 IF SUCCESSFUL
 * On error, RETURN -1, and errno is set appropriately
 */

int _putchar(char c)

{
	return (write(1, &c, 1));
}
