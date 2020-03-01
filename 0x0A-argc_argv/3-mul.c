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
	int mul;

	if (argc <= 2)
	{
		printf("Error\n");
		return (1);
	}
	mul = 0;
	mul = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", mul);
	return (0);
}
