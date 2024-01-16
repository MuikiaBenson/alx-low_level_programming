#include "main.h"

/**
 * _strspn - calculates the lenght
 * @s: string
 * @accept:input
 *
 * Return: Always0 on success
 */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	unsigned int b = 0;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				b++;
				break;
			}
			else if (accept[a + 1] == '\0')
			{
				return (b);
			}
			s++;
		}
		return (b);
	}
}
