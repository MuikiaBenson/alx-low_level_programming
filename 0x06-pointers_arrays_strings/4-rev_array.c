#include "main.h"

/**
 * reserve_array- Reserves the content of an array of integers
 * @a: integer to be reserved
 * @n: number of elements in the array
 */

void reserve_array(int *a, int n)
{
	int i, j;

	for (j = n - 1; j >= n / 2; j--)
	{
		i = a[n - 1 - j];
		a[n - 1 - j] = a[j];
		a[j] = i
	}
}
