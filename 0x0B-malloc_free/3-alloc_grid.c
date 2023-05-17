#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2
 * dimensional array of integers.
 * @width: width of the array
 * @height: height of the array
 *
 * Return: return a pointer to a 2 dimensional array of integers.
 */
int **alloc_grid(int width, int height)
{
	int **a_rray, a, b;
	int len = width * height;

	if (len <= 0)
		return (NULL);

	a_rray = (int **)malloc(sizeof(int *) * height);
	if (a_rray == NULL)
		return (NULL);

	for (a= 0; a < height; a++)
	{
		a_rray[a] = (int *)malloc(sizeof(int) * width);
		if (a_rray[a] == NULL)
		{
			for (a--; a >= 0; a--)
				free(a_rray[a]);
			free(a_rray);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
		for (b = 0; b < width; b++)
			a_rray[a][b] = 0;

	return (a_rray);
}
