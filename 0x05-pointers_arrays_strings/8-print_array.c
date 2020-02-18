#include <stdio.h>
#include "holberton.h"
/**
 * print_array - writes nudscfdsmbers
 * @a: pointer
 * @n: n
 * Return: none
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%i", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	printf("\n");

}
