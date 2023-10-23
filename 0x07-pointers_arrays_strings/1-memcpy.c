#include "main.h"

/**
 * _memcpy- Entry point
 * @dest: input
 * @src: input
 * @n: input
 * Return: Always 0 on success
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
