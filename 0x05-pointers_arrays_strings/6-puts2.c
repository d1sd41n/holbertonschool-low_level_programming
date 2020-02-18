#include "holberton.h"
/**
 * puts2 - wricdwcwc
 * @str: pointer
 * Return: none
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
