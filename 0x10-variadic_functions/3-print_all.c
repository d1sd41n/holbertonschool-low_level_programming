#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_all - printwdqwdwqs string in reverse
 * @format: possad
 * Return: none
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	int i;
	char *w;

	va_start(valist, format);
	i = 0;
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%d", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				w = va_arg(valist, char *);
				if (w)
					printf("%s", w);
				else
					printf("(nil)");
				break;
		}
		if (format[i + 1] != '\0' &&
			(format[i] == 'c' || format[i] == 'i' ||
			 format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(valist);
}
