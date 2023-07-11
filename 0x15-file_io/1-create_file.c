#include "main.h"

/**
 * create_file - Creates file
 * @filename: ptr to name of the file to create
 * @text_content: ptr to str to write to the file
 *
 * Return: if function fails - -1,
 *         -1 Otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int Fd, W, Len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (Len = 0; text_content[Len];)
			Len++;
	}

	Fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	W = write(Fd, text_content, Len);

	if (Fd == -1 || W == -1)
		return (-1);

	close(Fd);

	return (1);
}
