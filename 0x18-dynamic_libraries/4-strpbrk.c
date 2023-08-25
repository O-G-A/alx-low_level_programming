#include "main.h"

/**
 * _strpbrk - locates the first occurrence in
 * the str s of any of the bytes in the str
 *
 * @s: str where the search is made
 * @accept: str where searched bytes are located
 *
 * Return: ptr to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (accept[i] == *s)
				return (s);
		}
		s++;
	}

	return ('\0');
}
