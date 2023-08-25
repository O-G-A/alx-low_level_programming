#include "main.h"

/**
 * _strspn - searches number of bytes in initial
 * segment of s which consists only bytes
 * @s: targeted segment
 * @accept:reference bytes container
 *
 * Return: number of bytes in initial
 * segment of s which consist only bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
			{
				bytes++;
				break;
			}
			else if ((accept[i + 1]) == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}
