#include "main.h"

/**
 * print_binary - prints binary equivalent of decimal number
 * @n: the number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int itr, count = 0;
	unsigned long int current;

	for (itr = 63; itr >= 0; itr--)
	{
		current = n >> itr;

		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
