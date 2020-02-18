#include "holberton.h"
/**
 * swap_int - writes numbers
 * @a: pointer
 * @b: pointer
 * Return: none
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
