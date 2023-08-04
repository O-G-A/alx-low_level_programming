#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned integer
 * @b: the strg containing binary number
 *
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int I;
	unsigned int Dec_Val = 0;

	if (!b)
		return (0);

	for (I = 0; b[I]; I++)
	{
		if (b[I] < '0' || b[I] > '1')
			return (0);
		Dec_Val = 2 * Dec_Val + (b[I] - '0');
	}

	return (Dec_Val);
}
