#include "main.h"

/**
 * print_binary - prints binary equivalent of the decimal numb
 * @n: the numb to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int I, Count = 0;
	unsigned long int Crnt;

	for (I = 63; I >= 0; I--)
	{
		Crnt = n >> I;

		if (Crnt & 1)
		{
			_putchar('1');
			Count++;
		}
		else if (Count)
			_putchar('0');
	}
	if (!Count)
		_putchar('0');
}
