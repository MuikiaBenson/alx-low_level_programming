#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of parameters function
 * @n: number of parameters passed to the function
 * @...: variable number of parameters
 *
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
