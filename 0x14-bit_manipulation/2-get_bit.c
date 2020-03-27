#include "holberton.h"
/**
 * get_bit - description
 * @n: description
 * @index: description
 * Return: description
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 32)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return (n & 1);
}

