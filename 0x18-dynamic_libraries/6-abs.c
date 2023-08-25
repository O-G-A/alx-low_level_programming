#include "main.h"

/**
 * _abs - prints absolute value of a number
 * @i: numb targeted
 * Return: 0 on success
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (-i);
	else
		return (0);
}
