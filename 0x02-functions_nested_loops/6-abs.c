#include "main.h"

/**
 * _abs- Compute the absolute value of an integer
 * @a: number
 * Return: absolute value or 0
 */

int _abs(int a)
{
	if (a < 0)
	{
		int abs_value;

		abs_value = a * -1;
		return (abs_value);
	}
	return (a);
}
