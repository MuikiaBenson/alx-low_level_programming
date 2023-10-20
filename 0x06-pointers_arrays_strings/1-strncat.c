#include "main.h"

/**
 * _strncat- concatenates two strings
 * @dest: string
 * @src: string
 * @n: number of bytes to append to dest(from src)
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a++])
	{
		b++;
	}
	for (a = 0; src[a] && a < n; a++)
	{
		dest[b++] = src[a];
	}
	return (dest);
}
