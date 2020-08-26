#include "search_algos.h"

/**
 * binary_search - a function
 * @array: array of int
 * @size: int
 * @value: int
 *
 * Return: a index
 */
int binary_search(int *array, size_t size, int value)
{
	size_t sup = size - 1;
	size_t inf = 0, mitad = 0, i;

	if (array == NULL || size == 0)
		return (-1);

	while (sup >= inf)
	{
		mitad = (inf + sup) / 2;

		printf("Searching in array: ");
		for (i = inf; i <= sup; i++)
		{
			if (i == sup)
			{
				printf("%i\n", array[sup]);
				break;
			}
			printf("%i, ", array[i]);
		}

		if (array[mitad] == value)
			return (mitad);
		else if (array[mitad] < value)
			inf = mitad + 1;
		else if (array[mitad] > value)
			sup = mitad - 1;
	}
	return (-1);
}
