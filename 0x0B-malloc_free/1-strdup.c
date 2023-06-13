#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Returns pointer to a newly allocated space in memory
 * which contains a copy of the string
 * @str: The string, char
 *
 * Return: 0
 */
char *_strdup(char *str)
{
	char *A;
	int a, x = 0;

	if (str == NULL)
		return (NULL);
	a = 0;
	while (str[a] != '\0')
		a++;

	A = malloc(sizeof(char) * (a + 1));
	if (A == NULL)
		return (NULL);
	for (x = 0; str[x]; x++)
		A[x] = str[x];
	return (A);
}
