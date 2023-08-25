#include "main.h"

/**
 * _strstr - finds first occurrence of substring
 * needle in the str haystack
 * @haystack: str where search is made
 * @needle: str whose occurence is searched in haystack
 * Return: ptr to beginning of the located substr,
 * NULL if substr is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);

	while (*haystack)
	{
		i = 0;

		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
