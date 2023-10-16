#include <stdio.h>

/**
 * _strlen- returns the lenght of a string.
 * @str: string to get the lenght
 * Return: length of @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
	{
		length++;
	}
	return (length);
}
