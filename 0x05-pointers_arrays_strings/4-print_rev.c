#include "holberton.h"
/**
 * print_rev - wricdwcwc
 * @s: pointer
 * Return: none
 */
void print_rev(char *s)
{
	int i, j;

	i = 0;
	while (1)
	{
		if (s[i] == '\0')
			break;
		i += 1;
	}
	i -= 1;

	for (j = i; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}
