#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *_strdup - writes nudscfdsmbers
 * @str: pointer
 * Return: char
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	;
	s = malloc(i + 1);
	if (s == NULL)
		{
		free(s);
		return (NULL);
		}
	for (j = 0; j < i + 1; j++)
	{
		s[j] = str[j];
	}
	return (s);
}
