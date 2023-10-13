#include "main.h"

/**
 * print_triangle- prints triangles of squares
 * @a: size
 * Return: empty
 */

void print_triangle(int a)
{
	int b, c, d;

	if (a <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (b = 0; b < a; b++)
	{
	for (c = a - b; c > 1; c--)
	{
	_putchar(32);
	}
	for (d = 0; d <= b; d++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
