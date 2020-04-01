#include "holberton.h"
/**
 * main - description
 * @argc: description
 * @argv: description
 * Return: description
 */
int main(int argc, char *argv[])
{
	int leer, esc;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"),
		exit(97);
	}
	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]),
		exit(98);
	}
	if (argv[2] == NULL)
	{
		dprintf(STDERR_FILENO, "Erro\r: Can't write to file %s\n", argv[2]),
		exit(99);
	}
	leer = open(argv[1], O_RDONLY);
	if (leer == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	esc = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (esc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	return (0);
}
