#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- prints strings
 * @separator: string to be printed between strings
 * @n: number of strings passed to the function
 *
 * Return: Always 0 on Success
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);
	if (separator == NULL)
		separator = "";
	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
