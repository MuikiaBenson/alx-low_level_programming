#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenate two strings
 * @dest: string(input value)
 * @src: string(input value)
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int a;
	int b;

	a = 0;
	while (dest[a] != '\0')
	{
		a++;
	}
	while (src[j] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[a] = '\0';
	return (dest);
}
