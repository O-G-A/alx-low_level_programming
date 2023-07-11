#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for buffer
 * @file: name of file, buff is storing chars for
 *
 * Return: ptr to newly-allocated buff
 */
char *create_buffer(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buff);
}

/**
 * close_file - Closes fd
 * @fd: fd to be closed
 */
void close_file(int fd)
{
	int C;

	C = close(fd);

	if (C == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies contents of file to another file
 * @argc: number of args supplied to the program
 * @argv: array of ptrs to the args
 *
 * Return: 0 on success
 *
 * Description: if arg count is incorrect - exit code 97
 * if file_from does not exist or cannot be read - exit code 98
 * if file_to cannot be created or written to - exit code 99
 * if file_to or file_from cannot be closed - exit code 100
 */
int main(int argc, char *argv[])
{
	int From, To, R, W;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buffer(argv[2]);
	From = open(argv[1], O_RDONLY);
	R = read(From, buff, 1024);
	To = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (From == -1 || R == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}

		W = write(To, buff, R);
		if (To == -1 || W == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}

		R = read(From, buff, 1024);
		To = open(argv[2], O_WRONLY | O_APPEND);

	} while (R > 0);

	free(buff);
	close_file(From);
	close_file(To);

	return (0);
}
