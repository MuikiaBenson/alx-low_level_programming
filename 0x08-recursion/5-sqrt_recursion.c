#include "main.h"
#include <stdio.h>

int _sqrt(int n, int i);

/**
 * _sqrt_recursion - returns the natural sqrt
 * of a number
 * @n: number to calculate the sqrt
 *
 * Return: natural sqrt
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}


/**
 * _sqrt - calxulate natural sqrt
 * @n: number to calculate the sqrt
 * @i: iterate number
 *
 * Return: the natural sqrt
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}
