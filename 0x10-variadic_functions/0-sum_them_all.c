#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all the paramters.
 * @n: number of paramters passed to function.
 * @...: variable number of paramters to calculate the sum of.
 *
 * Return: if n == 0 - 0.
 * Otherwise - sum of all the parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list P;
	unsigned int a, sum = 0;

	va_start(P, n);

	for (a = 0; a < n; a++)
		sum += va_arg(P, int);
	va_end(P);

	return (sum);
}
