#include "main.h"

/**
 * clear_bit - sets value of a given bit to 0
 * @n: ptr to the numb to be changed
 * @index: the indx of the bit to clear
 *
 * Return: 1 success, -1 failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
