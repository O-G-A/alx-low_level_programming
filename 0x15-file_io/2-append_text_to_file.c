#include "main.h"

/**
 * append_text_to_file - Appends text at end of the file
 * @filename: ptr to name of the file
 * @text_content: str to add to end of the file
 *
 * Return: if function fails or the filename is NULL - -1,
 *         if the file does not exist the user lacks write permission - -1
 *         otherwise - 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int O, W, Len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (Len = 0; text_content[Len];)
			Len++;
	}

	O = open(filename, O_WRONLY | O_APPEND);
	W = write(O, text_content, Len);

	if (O == -1 || W == -1)
		return (-1);

	close(O);

	return (1);
}
