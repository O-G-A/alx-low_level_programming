#include "main.h"

/**
 * binary_to_uint - converts binary unsigned integer
 * @b: the str containing binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int itr;
	unsigned int dec = 0;

	if (!b)
		return (0);

	for (itr = 0; b[itr]; itr++)
	{
		if (b[itr] < '0' || b[itr] > '1')
			return (0);
		dec = 2 * dec + (b[itr] - '0');
	}

	return (dec);
}
