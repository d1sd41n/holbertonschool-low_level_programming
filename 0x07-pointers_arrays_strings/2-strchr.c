#include "holberton.h"
/**
 * *_strchr - locates a char
 * @s: pointer to char array
 * @c: char
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			p = &s[i];
			break;
		}
		i++;
	}
	return (p);


}
