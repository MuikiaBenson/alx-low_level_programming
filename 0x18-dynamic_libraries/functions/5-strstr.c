#include "main.h"

/**
 * _strstr -locates a substring
 * @haystack: input value
 * @needle: input value
 *
 * Return: Always 0 on success
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *a = haystack;
		char *b = needle;

		while (*a == *b && *b != '\0')
		{
			a++;
			b++;
		}
		if (*b == '\0')
			return (haystack);
	}
	return (0);
}
