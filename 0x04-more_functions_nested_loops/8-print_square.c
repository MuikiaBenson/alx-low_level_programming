#include "main.h"

/**
 * print_square- prints x squares according to the x number of times
 * @x: number of times
 * Return: empty
 */

void print_square(int x)
{
	int a, b;

	if (x <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (a = 0; a < x; a++)
	{
	for (b = 0; b < x; b++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
