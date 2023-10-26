include "main.h"
#include <stdio.h>

/**
 * check_prime - checks if number is prime
 * @n: number to be checked
 * @i: number of iterations
 * Return: 1 for prime or 0 composite
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
