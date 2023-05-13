#include <stdio.h>
#include <stdlib.h>

/**
 * main - This function is to add positive numbers.
 * @argc: argument count
 * @argv: argument array
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i, n, add = 0;
	char *test;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		n = strtol(argv[i], &test, 10);
		if (*test)
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			add += n;
		}
	}
	printf("%d\n", add);

	return (0);
}
