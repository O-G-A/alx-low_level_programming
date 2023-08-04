#include "main.h"

/**
 * set_bit - sets bit at a given indx to 1
 * @n: ptr to the numb to be changed
 * @index: the indx of the bit to be set to 1
 *
 * Return: 1 success, -1 failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
