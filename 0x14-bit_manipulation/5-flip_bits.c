#include "main.h"

/**
 * flip_bits - counts number of the bits to change
 * @n: the first numb
 * @m: the second numb
 *
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int I, Count = 0;
	unsigned long int Current;
	unsigned long int exclusive = n ^ m;

	for (I = 63; I >= 0; I--)
	{
		Current = exclusive >> I;
		if (Current & 1)
			Count++;
	}

	return (Count);
}
