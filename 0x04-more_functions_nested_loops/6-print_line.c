#include "main.h"

/**
 * print_line- draws straight line according to parameters
 * @a: number of lines o draw
 * Return: empty
 */

void print_line(int a)
{
	int b;

	if (a <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (b = 0; b < a; b++)
		{
			_putchar(95);
		}
		_putchar('\n');
	}
}
