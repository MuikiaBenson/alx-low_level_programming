#include "main.h"

/**
 * char *_strcpy - copy a string pointed by src
 * @dest: destination string
 * @src: source string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0, b = 0;

	while (*(src + a) != '\0')
	{
		a++;
	}
	for (; b < a; b++)
	{
		dest[b] = src[b];
	}
	dest[a] = '\0';
	return (dest);
}
