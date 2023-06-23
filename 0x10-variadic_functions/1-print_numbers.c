#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by new line.
 * @separator: string to be printed.
 * @n: number of integers passed to the function.
 * ..: a variable number of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list Nmbs;
	unsigned int Indx;

	va_start(Nmbs, n);
	for (Indx = 0; Indx < n; Indx++)
	{
		printf("%d", va_arg(Nmbs, int));
		if (Indx != (n - 1) && separator != NULL)
				printf("%s", separator);
	}

	printf("\n");

	va_end(Nmbs);
}
