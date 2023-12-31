#include "main.h"
#include <stdlib.h>

/**
 * create_file - forms a file.
 * @filename: a reference to the filename that needs to be created.
 * @text_content: a pointer to a text message should be written to document.
 *
 * Return: If the function doesn't work, -1.
 *         if not, 1.
 */
int create_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
