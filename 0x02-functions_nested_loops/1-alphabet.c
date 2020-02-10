#include "holberton.h"
/**
 * print_alphabet - writes alphabet
 *
 * Return: none.
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
