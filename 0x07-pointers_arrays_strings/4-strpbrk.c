#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - entry point
 * @s: input
 * @accept: input
 * Return: always 0 on success
 */

char *_strpbrk(char *s, char *accept)
{
	int a, n;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[a] == accept[n])
				return (s + a);
		}
	}
	return (NULL);
}
