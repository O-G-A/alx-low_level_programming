#include "main.h"

/**
 * _isdigit - function that verifies if a  char is a digit or not
 * @c: tested char
 * Return: 1 if uppercase , 0 otherwise
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);

	return (0);
}
