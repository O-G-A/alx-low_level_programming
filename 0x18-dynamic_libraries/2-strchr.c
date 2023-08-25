#include "main.h"
#include <stddef.h>

/**
 * _strchr - returns ptr to the first occurrence
 * of char c in the str s, or NULL if the
 * char is not found
 *
 * @s:str targeted
 * @c:char targeted
 *
 * Return: ptr to the first occcurence of c
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; (s[i] != c) && (s[i] != '\0'); i++)
		;
	if (s[i] == c)
		return (s + i);
	else
		return (NULL);
}
