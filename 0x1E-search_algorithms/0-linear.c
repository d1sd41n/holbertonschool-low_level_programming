#include "search_algos.h"

/**
 * linear_search - docs  fo the function¿
 * @array: array of int
 * @size: int
 * @value: int
 *
 * Return: Nothing.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%li] = [%i]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
