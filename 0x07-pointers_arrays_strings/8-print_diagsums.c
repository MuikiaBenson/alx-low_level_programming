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
	int b, suma = 0, sumb = 0;

	for (b = 0; b < size; b++)
	{
		suma = suma + a[b * size + b];
	}
	for (b = size - 1; b >= 0; b--)
	{
		sumb += a[b * size + (size - b - 1)];
	}
		printf("%d, %d\n", suma, sumb);
}
