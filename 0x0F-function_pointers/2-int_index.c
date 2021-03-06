#include <stdio.h>
#include "function_pointers.h"
/**
 * int_index - writes nudscfdsmbers
 * @array: pointer
 * @size: pointer
 * @cmp: pointer
 * Return: none
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (!array || !cmp)
		return (-1);
	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
