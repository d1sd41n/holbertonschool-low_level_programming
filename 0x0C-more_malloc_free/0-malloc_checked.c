#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *malloc_checked - writes nudscfdsmbers
 * @b: psdds
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *i = malloc(b);

	if (i == NULL)
	{
		free(i);
		exit(98);
	}
	return (i);
}
