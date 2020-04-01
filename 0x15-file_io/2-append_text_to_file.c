#include "holberton.h"
/**
 * append_text_to_file - description
 * @filename: description
 * @text_content: description
 * Return: description
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int leer, esc, i = 0;

	if (filename == NULL)
		return (-1);

	leer = open(filename, O_WRONLY | O_APPEND);
	if (leer == -1)
		return (-1);

	for (i = 0; text_content && text_content[i]; i++)
		;

	if (text_content)
	{
		esc = write(leer, text_content, i);

		if (esc == -1)
		{
			close(leer);
			return (-1);
		}
	}
	close(leer);
	return (1);
}
