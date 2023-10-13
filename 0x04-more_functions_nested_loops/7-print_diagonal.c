#include "main.h"

/**
 * print_diagonal- draws a diagonal line
 * @a: number of iterations
 * Return: empty
 */

void print_diagonal(int a)
{
	int b, c;

	if (a <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (b = 0; b < a; b++)
	{
	for (c = 0; c < b; c++)
	{
	_putchar(32);
	}
	_putchar(92);
	_putchar('\n');
	}
	}
}
