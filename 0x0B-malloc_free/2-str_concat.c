#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *str_concat - writes nudscfdsmbers
 * @s1: pointer
 * @s2: pointer
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int i, j;
	char *s;

	if (s1 == NULL || s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	;
	for (j = 0; s2[j] != '\0'; j++)
	;
	j++;

	s = malloc(i + j);
	if (s == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);

}