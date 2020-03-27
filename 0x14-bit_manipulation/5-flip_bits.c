#include "holberton.h"
/**
 * flip_bits - description
 * @n: description
 * @m: description
 * Return: description
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int xor = n ^ m;

	while (xor != 0)
	{
		if (xor & 1)
			i++;
		xor = xor >> 1;
	}
	return (i);
}

