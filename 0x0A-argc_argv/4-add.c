#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry point
 * @argc: entry n
 * @argv: entry array
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int n, i, j;

	n = 0;
	if (argc <= 1)
	{
		printf("%i\n", n);
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		n += atoi(argv[i]);
	}
	printf("%i\n", n);
	return (0);
	}
