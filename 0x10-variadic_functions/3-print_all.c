#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - can print anything possible
 * @format: the list of type of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	int a = 0;
	char *strg, *Sp = "";

	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[a])
		{
			switch (format[a])
			{
				case 'c':
					printf("%s%c", Sp, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", Sp, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", Sp, va_arg(list, double));
					break;
				case 's':
					strg = va_arg(list, char *);
					if (!strg)
						strg = "(nil)";
					printf("%s%s", Sp, strg);
					break;
				default:
					a++;
					continue;
			}
			Sp = ", ";
			a++;
		}
		}

	printf("\n");
	va_end(list);
}
