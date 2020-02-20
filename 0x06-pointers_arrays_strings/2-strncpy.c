#include "holberton.h"
/**
 * *_strncpy - writes nudscfdsmbers
 * @dest: pointer
 * @src: pointer
 * @n: n
 * Return: none
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
