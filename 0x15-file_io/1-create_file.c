#include "holberton.h"
/**
 * create_file - description
 * @filename: description
 * @text_content: description
 * Return: description
 */
int create_file(const char *filename, char *text_content)
{
	int leer, esc, i = 0;

	for (i = 0; text_content && text_content[i]; i++)
		;

	leer = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (leer == -1)
		return (-1);

	if (i > 0)
		esc = write(leer, text_content, i);

	if (esc == -1)
		return (-1);

	close(leer);
	return (1);
}
