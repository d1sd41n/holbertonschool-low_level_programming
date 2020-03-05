#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * *string_nconcat - wriewdewqdtes nudscfdsmbers
 * @s1: cgar
 * @s2: psdds
 * @n: psdds
 * Return: void
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, size;
	char *s;

	for (i = 0; s1 && s1[i] != '\0'; i++)
	;
	for (j = 0; s2 && s2[j]; j++)
	;

	if (j <= n)
		size = j;
	else
		size = n;

	s = malloc(i + size + 1);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1 && s1[i]; i++)
	{
		s[i] = s1[i];
	}

	for (j = 0; s2 && s2[j] && j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
