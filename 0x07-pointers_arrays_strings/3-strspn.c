#include "main.h"

/**
 * _strspn- entry point
 * @s: input
 * @accept: input
 * Return: Always 0 on success
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a, n, v, c;

	v = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		c = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[a])
			{
				v++;
				c = 1;
			}
		}
	}
	if (c == 0)
	{
		return v;
	}
	return v;
}
