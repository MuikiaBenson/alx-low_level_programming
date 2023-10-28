#include "main.h"

/**
 * _strchr - function
 * @s: value
 * @c: value
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	for (int a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (&s[a]);
		}
		return (0);
	}
}
