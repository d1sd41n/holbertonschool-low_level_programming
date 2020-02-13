#include "holberton.h"
/**
 * print_triangle - writes numbers
 * @size: d
 * Return: none.
 */
void print_triangle(int size)
{
	int r, c;

	if (size > 0)
	{
		for (r = 1; r <= size; r++)
		{
			for (c = 1; c <= size; c++)
			{
				if (size - r >= c)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
