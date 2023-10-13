#include "main.h"

/**
 * more_numbers- print the numbers 0 to 14 10 times
 * Return: 0 o 14 (10 times)
 */

void more_numbers(void)
{
	int a, b;

	for (a = 0; a < 10; a++)
	{
	for (b = 0; b <= 14; b++)
	{
	if (b > 9)
	{
	_putchar((b / 10) + '0');
	}
	_putchar((b % 10) + '0');
	}
	_putchar('\n');
	}
}
