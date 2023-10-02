#include "main.h"

/**
 * create_file - Function creates a file.
 * @filename: Displays path to file.
 * @text_content: content to be written or truncated.
 * Return: 1 Success, -1 (Failure)
 */

int create_file(const char *filename, char *text_content)
{
	int count;
	int len = 0;
	int fld;

	if (filename == NULL)
		return (-1);

	/* Open file, get file descriptor */
	fld = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fld == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}
	/* write  file description */
	count = write(fld, text_content, len);
	if (count == -1)
	{
		close(fld);
		return (-1);
	}
	close(fld);
	return (1);
}

