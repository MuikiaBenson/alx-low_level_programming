#include "main.h"

/**
 * _strcmp- compares pointer to two strings
 * @s1: pointer
 * @s2: pointer
 * Return: if string1 < string2(negative difference)
 * string1 == string2, 0.
 * string1 > string2(positive difference)
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
