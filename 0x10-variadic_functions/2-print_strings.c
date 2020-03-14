#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - prints string in reverse
 * @separator: possad
 * @n: passacs
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (!n)
		return;
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(valist, char *));
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(valist);
}
