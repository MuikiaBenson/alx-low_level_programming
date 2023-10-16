#include "main.h"

/**
 * rev_string- reverse a string
 * @a: string
 * Return: nothing
 */

void rev_string(char *a)
{
	int len = 0, index = 0;
	char tmp;

	while (a[index++])
	{
		len++;
	}
	for (index = len - 1; index >= len / 2; index--)
	{
		tmp = a[index];
		a[index] = a[len - index - 1];
		a[len - index - 1] = tmp;
	}
}
