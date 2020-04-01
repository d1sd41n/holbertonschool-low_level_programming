#include "holberton.h"
/**
 * create_file - description
 * @filename: description
 * @text_content: description
 * Return: description
 */
int create_file(const char *filename, char *text_content)
{
	int leer, esc, i;

	if (filename == NULL)
		return (0);

	leer = open(filename, O_WRONLY | O_TRUNC | O_CREAT);
	if (leer == -1)
		return (-1);

	for (i = 0; text_content[i] != '\0' && text_content != NULL; i++)
		;
	if (text_content == NULL)
	{
		i = 0;
		text_content = "";
	}

	esc = write(leer, text_content, i);
	if (esc == -1)
	{
		close(leer);
		return (-1);
	}
	close(leer);
	return (1);
}
