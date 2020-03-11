#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - Entry point
 * @argc: pointer
 * @argv: pointer
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a, b, r;
	int (*fun)(int, int);

	if (argv[2][1] != '\0')
	{
		exit(99);
	}
	if (argc != 4)
		{
		exit(98);
		}


	a = atoi(argv[1]);
	b = atoi(argv[3]);
	fun = get_op_func(argv[2]);
	r = fun(a, b);
	printf("%d\n", r);
	return (0);
}
