#include "function_pointers.h"
/**
 * print_name - writes nudscfdsmbers
 * @name: pointer
 * @f: pointer
 * Return: none
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
