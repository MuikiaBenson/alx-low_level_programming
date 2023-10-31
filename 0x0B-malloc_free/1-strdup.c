#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate of the string(pointer to a new string)
 * @str: string
 * Return: duplicate of the string
 */

char *_strdup(char *str)
{
	int a = 0;
	int b = 1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[b])
	{
		b++;
	}

	s = malloc((sizeof(char) * b) + 1);

	if (s == NULL)
		return (NULL);
	while (a < b)
	{
		s[a] = str[a];
		a++;
	}
	s[a] = '\0';
	return (s);
}
