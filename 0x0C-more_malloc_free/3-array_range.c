#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *array_range - writes nudssasafsacfdsmbers
 * @min: psdds
 * @max: psdds
 * Return: void
 */
int *array_range(int min, int max)
{
	int i, j, *s;

	if (max < min)
		return (NULL);

	s = malloc((max - min + 1) * sizeof(int));
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	j = 0;
	for (i = min; i <= max; i++)
	{
		s[j] = i;
		j++;
	}
	return (s);
}
