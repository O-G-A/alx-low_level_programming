#include "main.h"

/**
 * get_endianness - checks if the machine is little or big endian
 * Return: 0 if it's big, 1 if it's little
 */
int get_endianness(void)
{
	unsigned int I = 1;
	char *c = (char *) &I;

	return (*c);
}
