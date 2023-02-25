#include "main.h"
/**
 * _c - computes absolute value of an integer
 * @c: integer input
 * Return: absolute value of c
 */
int _abs(int c)
{
	return (c * ((c > 0) - (c < 0)));
}
