#include "main.h"

/**
 * _strncat - concatenates two strgs but add inputted numb of bytes
 * @dest: str to be appended upon
 * @src: str to be completed at end the of dest
 * @n:integer parameter to compare index to
 * Return: new concatenated str
 */
char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
