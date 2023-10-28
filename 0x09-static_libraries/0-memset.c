#include "main.h"

/**
 * _memset - fills a block of memory with a specific value
 * @a: memory address to be filled
 * @b: output
 * @n: number of bytes to be changed
 * Return: array with new value for bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
