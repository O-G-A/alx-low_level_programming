#include "main.h"

/**
 * _isupper - function that verifies if char is uppercase or not
 * @c: tested char
 * Return: 1 for uppercase , 0 else
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
