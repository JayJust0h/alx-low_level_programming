#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file.
 * @filename: Path to the file.
 * @text_content: Content to append at end of file.
 * Return: 1(Success), -1(Failure)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int count, len = 0, fld, index;

	if (filename == NULL)
		return (-1);

	/* Open file, get file descriptor */
	fld = open(filename, 2 | O_APPEND, 0600);
	if (fld == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	for (index = 0; text_content[index]; index++)
		len++;

	/* Write the file description */
	count = write(fld, text_content, len);
	if (count == -1)
	{
		close(fld);
		return (-1);
	}
	close(fld);

	return (1);
}

