#include "main.h"

/**
 * reserve_array- Reserves the content of an array of integers
 * @a: integer to be reserved
 * @n: number of elements in the array
 * Return: void
 */

void reserve_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
