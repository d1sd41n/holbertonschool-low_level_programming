#include "holberton.h"
/**
 * *cap_string - writes nudscfdsmbers
 * @str: pointer
 * Return: none
 */
char *cap_string(char *str)
{
	int i;

	i = 0;
	if (str[i] >= 'a' && str[i] <= 'z')
		str[i] = str[i] - 32;

	while (str[i] != '\0')
	{
		if (str[i] == ',' || str[i] == '\n' || str[i] == ';'
			|| str[i] == '!'
			|| str[i] == '?'
			|| str[i] == '"'
			|| str[i] == '('
			|| str[i] == ')'
			|| str[i] == '{'
			|| str[i] == '}'
			|| str[i] == ' '
			|| str[i] == '\t')
			{
				if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
					str[i + 1] = str[i + 1] - 32;
			}
		i++;
	}
	return (str);
}
