#include "main.h"

/**
 * append_text_to_file - This function appends a text at the end of file
 * @filename: This function points to the name of the file
 * @text_content: This function adds a string to the end of the file
 *
 * Return: if fails --1 and if not exist --1 else return -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
