#include <stdio.h>
#include "main.h"

/**
 * print_rev- Prints astring in reverse
 * @a: string
 * Return: nothing
 */

void print_rev(char *a)
{
	int b = 0;

	while (a[b] != '\0')
	{
		b++;
	}
	for (b -= 1; b >= 0; b--)
	{
		_putchar(a[b]);
	}
	_putchar('\n');
}
