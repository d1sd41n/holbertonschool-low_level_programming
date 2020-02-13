#include "holberton.h"
/**
 * print_diagonal - writes_
 * @n: n
 * Return: none.
 */
void print_diagonal(int n)
{
	int c, s;

	if (n > 0)
	{
		for (c = 0; c < n; c++)
		{
			for (s = 0; s < c; s++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
