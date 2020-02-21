#include "holberton.h"
/**
 * *rot13 - writes nudscfdsmbers
 * @str: pointer
 * Return: none
 */
char *rot13(char *str)
{
	int i, j;
	char s1[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char s2[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
		}
		i++;
	}
	return (str);
}
