#include "variadic_functions.h"

/**
 * sum_them_all - summation of all parameters
 * @n: number of parameters
 *
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ap;

	va_starts(ap, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);

	return (sum);
}
