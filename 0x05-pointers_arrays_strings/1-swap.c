#include "stdio.h"

/**
 * swap_int- swap the value of two integers
 *
 * @a: First to be swapped
 * @b: Second to be swapped
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
