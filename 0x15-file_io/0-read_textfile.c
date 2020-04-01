#include "holberton.h"
/**
 * read_textfile - description
 * @filename: description
 * @letters: description
 * Return: description
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int leer, leer2, i;

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	leer = open(filename, O_RDONLY);
	if (leer == -1)
	{
		free(buffer);
		return (0);
	}
	leer2 = read(leer, buffer, letters);
	if (leer2 == -1)
	{
		close(leer);
		free(buffer);
		return (0);
	}
	for (i = 0; i < leer2; i++)
	{
		if (write(STDOUT_FILENO, &buffer[i], 1) == -1)
		{
			close(leer);
			free(buffer);
			return (0);
		}
	}
	close(leer);
	free(buffer);
	return (leer2);
}
