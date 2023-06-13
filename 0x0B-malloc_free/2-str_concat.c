#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: input one to concatenate
 * @s2: input two to concatenate
 * Return: concatenate of s1 and s2
 */
char *str_concat(char *s1, char *s2)
{
	char *conct;
	int a, A;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	a = A = 0;

	while (s1[a] != '\0')
		a++;
	while (s2[A] != '\0')
		A++;
	conct = malloc(sizeof(char) * (a + A + 1));
	if (conct == NULL)
		return (NULL);
	a = A = 0;
	while (s1[a] != '\0')
	{
		conct[a] = s1[a];
		a++;
	}
	while (s2[A] != '\0')
	{
		conct[a] = s2[A];
		a++, A++;
	}
	conct[a] = '\0';

	return (conct);
}
