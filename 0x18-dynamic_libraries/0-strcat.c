#include "main.h"

/**
 * _strcat - concatenates string pointed to by @src to
 * end of the string pointed to by @dest
 * @dest: str that will be appended
 * @src: str to be concatenated upon
 *
 * Return: poiner to @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
