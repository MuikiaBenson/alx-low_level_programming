#include "main.h"
#include <stdio.h>

/**
 * print_diagsums- Entry point
 * @a: input
 * @size: input
 * Return: Always 0 on success
 */

void print_diagsums(int *a, int size)
{
	int b, n, suma = 0, sumb = 0;

	for (b = 0; b <= (size * size) - size; n = n + size - 1)
		suma = suma + a[b];
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
		sumb = sumb + a[n];
			printf("%d, %d\n", suma, sumb);
}
