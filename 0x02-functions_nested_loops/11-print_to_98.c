#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - fssdsdsda
 * @n: intr
 * Return: dadscds
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (n = n; n <= 98; n++)
		{
			if (n < 10 && n >= 0)
			{
			_putchar(n + '0');
			}
			else if ( n < 0 && n > -10)
			{
				_putchar('-');
				_putchar(n * - 1 + '0');
			}
			else if ( n < 0 )
                        {
                                _putchar('-');
                                _putchar(n / 10 * - 1 + '0');
				_putchar(n % 10 * - 1 + '0');
                        }
			else
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			}
			if ( n == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (n = n; n >= 98; n--)
		{
			printf("%i", n);
			if ( n == 98)
				break;
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
