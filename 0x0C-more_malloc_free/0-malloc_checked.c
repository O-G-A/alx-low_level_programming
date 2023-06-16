#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc function
 * @b: the number of bytes to allocate to the memory
 *
 * Return: a pointer to the allocated to the memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}
