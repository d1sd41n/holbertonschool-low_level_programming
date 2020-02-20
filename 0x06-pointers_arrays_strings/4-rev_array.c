#include "holberton.h"
/**
 * reverse_array - wricdwcwc
 * @a: pointer
 * @n: number
 * Return: none
 */
void reverse_array(int *a, int n)
{
	int a2[1000];
	int j, k;

	k = 0;

	k = n;
	for (j = 0; j <= n; j++)
	{
		a2[j] = a[k];
		k -= 1;
	}

	a2[j] = '\0';
	k = 0;
	while (a2[k] != '\0')
	{
		a[k] = a2[k];
		k += 1;
	}
}
