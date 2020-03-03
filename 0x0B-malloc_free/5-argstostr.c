#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * *argstostr - prints a grid of integers
 * @ac: width of the grid
 * @av: height of the grid
 *
 * Return: Nothing.
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, m;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j] != '\0'; j++)
			k++;
	k++;
	s = malloc(k);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	m = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (1)
		{
			if (av[i][j] == '\0')
			{
				s[m] = '\n';
				m++;
				break;
			}
			s[m] = av[i][j];
			m++;
			j++;
		}
	}
	s[m] = '\0';
	return (s);
}
