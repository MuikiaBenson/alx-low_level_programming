#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse
 * @s: string
 *
 * Return: Void
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
