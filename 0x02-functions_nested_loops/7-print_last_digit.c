#include "holberton.h"
/**
 * print_last_digit - do something
 * @n: int
 * Return: int
 */
int print_last_digit(int n)
{
	int d;
	
	d = n % 10;	
	if (d < 0)
		d = d * -1;
	_putchar(d + '0');
	return (d);
}
