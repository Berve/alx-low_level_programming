#include "main.h"
#include <stdio.h>

/**
 * print_line - a function that prints a buffer.
 * @c: buffer to be printed
 * @s: bytes of buffer to be printed
 * @l: line of buffer to be printed
 *
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		if (i <= s)
			printf("%02x", c[l * 10 + i]);
		else
			printf("  ");
		if (i % 2)
			putchar(' ');
	}
	for (j = 0; j <= s; j++)
	{
		if (c[l * 10 + j] > 31 && c[l * 10 + j] < 127)
			putchar(c[l * 10 + j]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int k;

	for (k = 0; k <= (size - 1) / 10 && size; k++)
	{
		printf("%08x: ", k * 10);
		if (k < size / 10)
		{
			print_line(b, 9, k);
		}
		else
		{
			print_line(b, size % 10 - 1, k);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
