#include "main.h"

/**
 * print_last_digit- prints the last digit
 * @a: number
 * Return: Value (last digit)
 */

int print_last_digit(int a)
{
	int digit;

	digit = a % 10;
	if (digit < 0)
	{
		digit = digit * -1;
	}
	_putchar(digit + '0');
	return (digit);
}
