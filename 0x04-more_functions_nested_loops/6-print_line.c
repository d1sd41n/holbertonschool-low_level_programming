#include "holberton.h"
/**
 * print_line - writes _
 * @n: n
 * Return: none.
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
