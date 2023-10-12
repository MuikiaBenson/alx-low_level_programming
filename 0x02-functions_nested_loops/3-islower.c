#include "main.h"

/**
 * _islower- his function checks for lowercase characters
 * @c: characer
 * Return: 1 (lowercase) or 0 (anything else)
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
