#include "holberton.h"
/**
 * puts_half - writes nudscfdsmbers
 * @str: pointer
 * Return: none
 */
void puts_half(char *str)
{
	int i;

	i = 0;
	while (1)
	{
		if (str[i] == '\0')
			break;
		i += 1;
	}
	if (i % 2 != 0)
		i -= 1;
	i = i / 2;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i += 1;
	}
	_putchar('\n');
}
