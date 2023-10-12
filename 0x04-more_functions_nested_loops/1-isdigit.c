#include "main.h"

/**
 * _isdigit- checks for digit characters
 * @a: number
 * Return: 1 (digit characters) or 0 (else)
 */

int _isdigit(int a)
{
	if (a >= 48 && a <= 57)
	{
	return (1);
	}
	return (0);
}
