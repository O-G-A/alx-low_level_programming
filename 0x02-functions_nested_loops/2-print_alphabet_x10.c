#include "main.h"

/**
 * print_alpabet_x10 - prints alphabets 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int num;
	int alpha;

	for (num = 0; num < 9; num++)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
			_putchar(alpha);
		_putchar('\n');
	}
}
