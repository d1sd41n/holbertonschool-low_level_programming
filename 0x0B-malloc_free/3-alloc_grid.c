#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * **alloc_grid - prints a grid of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **a = (int **)malloc(height * sizeof(int *));

	if (width <= 0 || height <= 0)
		return (NULL);

	if (a == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		a[i] = (int *)malloc(width * sizeof(int));
		if (a[i] == NULL)
		{
			for (i = 0;  i < height; i++)
				free(a[i]);
			free(a);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		a[i][i] = 0;
	return (a);
}
