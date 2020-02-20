#include "holberton.h"
/**
 * *leet - writes nudscfdsmbers
 * @str: pointer
 * Return: none
 */
char *leet(char *str)
{
	int i, j;
	char s1[] = "aeotl";
	char s2[] = "AEOTL";
	char s3[] = "43071";

	i = 0;
	while (str[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == s1[j] || str[i] == s2[j])
				str[i] = s3[j];
		}
		i++;
	}
	return (str);
}
