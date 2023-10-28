#include "main.h"

/**
 * _strpbrk -searches a string
 * @s: string
 * @accept: input value
 *
 * Return: Always 0 on success
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			return (s);
		}
		s++;
	}
	return ('\0');
}
