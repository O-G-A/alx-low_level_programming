#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of chars and initializes with a specific char
 * @size: Size of array
 * @c: The char to be assigned
 * Description: Creates array of size of char and assign char c
 * Return: The pointer to array, NULL if fail
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int a;

	ptr = malloc(sizeof(char) * size);
	if (size == 0 || ptr == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		ptr[a] = c;

	return (ptr);
}
