#include "main.h"
#include <stdlib.h>

/**
 * _calloc - memory allocation
 * @nmemb: number of members elements
 * @size: size of elements in bytes
 *
 * Return: Null
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int a = 0;
	int b = 0;
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	b = nmemb * size;
	p = malloc(b);

	if (p == NULL)
		return (NULL);

	while (a < b)
	{
		p[a] = 0;
		a++
	}

	return (p);
}
