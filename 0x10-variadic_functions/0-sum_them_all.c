#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - prints string in reverse
 * @n: pointer to string
 * Return: none
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0.0;
	unsigned int i;

	if (!n)
		return (0);
	va_start(valist, n);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
