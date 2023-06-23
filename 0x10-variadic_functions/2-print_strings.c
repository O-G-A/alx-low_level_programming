#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings, followed by new line.
 * @separator: string to be printed.
 * @n: number of strings passed to function.
 * @...: variable number of strings to be printed.
 *
 * Description: if separator is NULL, not printed.
 * if one of the strings is NULL, prints (nil).
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strgs;
	char *str;
	unsigned int Indx;

	va_start(strgs, n);

	for (Indx = 0; Indx < n; Indx++)
	{
		str = va_arg(strgs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (Indx != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(strgs);
}
