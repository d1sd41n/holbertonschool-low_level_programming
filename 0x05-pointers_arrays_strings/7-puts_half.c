#include "holberton.h"
/**
 * puts_half - writes nudscfdsmbers
 * @str: pointer
 * Return: none
 */
void puts_half(char *str)
{
	int i, j, k;

	i = 0;
	while (1)
	{
		if (str[i] == '\0')
			break;
		i += 1;
	}
	j = i;
	if (i % 2 != 0)
		i -= 1;
	i = i / 2;
	k = j - i;
	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
