#include "main.h"

/**
 * flip_bits - counts number of the bits to change
 * to get from one number to another
 * @n: the 1st number
 * @m: the 2nd number
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int itr, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (itr = 63; itr >= 0; itr--)
	{
		current = exclusive >> itr;
		if (current & 1)
			count++;
	}

	return (count);
}
