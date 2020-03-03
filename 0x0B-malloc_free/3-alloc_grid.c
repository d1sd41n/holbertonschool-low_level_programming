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
	int i, j;
	int **a = (int **)malloc(height * sizeof(int *));

	if (width == 0 || height == 0)
		return (NULL);

	for (i = 0; i < height; i++)
		a[i] = (int *)malloc(width * sizeof(int));

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			a[i][j] = 0;
	return (a);
}
