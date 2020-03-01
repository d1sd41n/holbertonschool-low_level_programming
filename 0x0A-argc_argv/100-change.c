#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: entry n
 * @argv: entry array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	return (0);
}
