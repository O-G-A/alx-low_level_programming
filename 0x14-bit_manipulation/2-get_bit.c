#include "main.h"

/**
 * get_bit - returns value of the bit at index in a decimal numb
 * @n: the numb to search
 * @index: the indx of bit
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int Bit_val;

	if (index > 63)
		return (-1);

	Bit_val = (n >> index) & 1;

	return (Bit_val);
}
