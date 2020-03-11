#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - writes nudscfdsmbers
 * @array: pointer
 * @size: pointer
 * @action: pointer
 * Return: none
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
