#include <stdio.h>
#include "holberton.h"
/**
 * print_diagsums - prints the sum of the two diagonals
 * @a: pointer to an array
 * @size: size of an array
 * Return: none
 */
void print_diagsums(int *a, int size)
{
	int i, j, s1, s2, k, aux1;

	s1 = 0;
	s2 = 0;
	k = 0;
	aux1 = 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				s1 += a[k];
			if (size - aux1 == j)
			{
				s2 += a[k];
				aux1++;
			}
			k++;
		}
	}
	printf("%i, %i\n", s1, s2);
}
