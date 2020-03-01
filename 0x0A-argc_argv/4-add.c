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
	int n, i, j;

	n = 0;
	if (argc <= 1)
	{
		printf("%i\n", n);
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < 48 || argv[i][j] > 57)
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
