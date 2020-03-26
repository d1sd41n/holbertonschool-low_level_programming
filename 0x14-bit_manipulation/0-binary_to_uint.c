#include "holberton.h"
/**
 * binary_to_uint - description
 * @b: description
 * Return: description
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int base, n;
	int i, j;

	if (b == NULL)
		return (0);

	base = 1;
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		base *= 2;
	}
	n = 0;
	base /= 2;
	for (j = 0; b[j] != '\0'; j++)
	{
		n += (b[j] - '0') * base;
		i--;
		base /= 2;
	}
	return (n);
}
