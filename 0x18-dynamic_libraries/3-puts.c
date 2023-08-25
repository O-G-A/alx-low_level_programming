#include "main.h"

/**
 * _puts - prints a str
 * @str: str to be printed
 *
 * Description: prints a str
 * On success: numb of char printed
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);
	_putchar('\n');
}
