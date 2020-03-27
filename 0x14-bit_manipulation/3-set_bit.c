#include "holberton.h"
/**
 * set_bit - description
 * @n: description
 * @index: description
 * Return: description
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, aux = 1;

	if (index > 32)
		return (-1);

	for (i = 0; i < index; i++)
		aux = aux << 1;
	*n |= aux;
	return (1);
}
