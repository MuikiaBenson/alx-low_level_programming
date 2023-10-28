#include "main.h"

/**
 * _atoi- coverts string to integer
 * @s: string
 *
 * Return: integer value
 */

int _atoi(char *s)
{
	int a = 1;
	int b = 0;
	unsigned int c = 0;

	while (!(s[b] <= '9' && s[b] >= '0') && s[b] != '\0')
	{
		if (s[b] == '-')
			a *= -1;
		b++;
	}
	while (s[b] <= '9' && (s[b] >= '0' && s[b] != '\0'))
	{
		c = (c * 10) + (s[b] - '0');
		b++;
	}
	c *= a;
	return (c);
}
