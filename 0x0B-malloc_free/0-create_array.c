#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * create_array - writes nudscfdsmbers
 * @size: pointer
 * @c: char
 * Return: none
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size) * sizeof(char));
	if (s == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
