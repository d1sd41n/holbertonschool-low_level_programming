#include "holberton.h"
/**
 * append_text_to_file - description
 * @filename: description
 * @text_content: description
 * Return: description
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t esc;
	int leer, i = 0;

	leer = open(filename, O_APPEND | O_WRONLY);
	if (leer == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0' && text_content != NULL; i++)
		;

	if (i > 0)
		esc = write(leer, text_content, i);

	if (esc == -1)
		return (-1);

	close(leer);
	return (1);
}
