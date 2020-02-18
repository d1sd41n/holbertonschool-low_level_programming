#include "holberton.h"
/**
 * rev_string - wricdwcwc
 * @s: pointer
 * Return: none
 */
void rev_string(char *s)
{
	char s2[1000];
	int i, j, k;

	i = 0;
	k = 0;
	while (1)
	{
		if (s[i] == '\0')
			break;
		i += 1;
	}

	i -= 1;
	k = i;
	for (j = 0; j <= i; j++)
	{
		s2[j] = s[k];
		k -= 1;
	}

	s2[j] = '\0';
	k = 0;
	while (s2[k] != '\0')
	{
		s[k] = s2[k];
		k += 1;
	}
}
