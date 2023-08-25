#include "main.h"

/**
 * _memcpy - _memcpy() function copies n bytes
 * from the memory area src to memory area dest
 * @src:area where bytes are copied from
 * @dest:area where bytes are copied to
 * @n:numb of bytes to copy
 * Return: a pointer to n
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
