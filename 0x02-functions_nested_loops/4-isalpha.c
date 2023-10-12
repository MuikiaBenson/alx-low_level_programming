#include "main.h"

/**
 * _isalpha- This checks for any aphabetical characters
 *@c: characters in question
 *Return: 1 (alphabetic character) 0 (anything else)
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

