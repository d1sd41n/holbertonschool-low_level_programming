#include "holberton.h"
/**
 * binary_to_uint - description
 * @b: description
 * Return: description
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base = 1, n = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
	}

	while (i)
	{
		n += (b[i - 1] - '0') * base;
		base *= 2;
		i--;
	}
	return (n);
}
