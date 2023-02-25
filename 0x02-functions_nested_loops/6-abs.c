#include "main.h"
/**
 * _abs - computes absolute value of an integer
 * @c: integer input
 * Return: absolute value of abs
 */
int _abs(int c)
{
	return (c * ((c > 0) - (c < 0)));
}
