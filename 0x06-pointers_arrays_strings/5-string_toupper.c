#include "main.h"

/**
 * string_toupper- changes all lower case of a
 * string to uppercase
 * @str: string
 * Return: pointer to the changed string
 */

char *string_toupper(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] >= 'a' && str[a] <= 'z')
		str[a] -= 32;
		a++;
	}
	return (str);
}
