#include "main.h"

/**
 * _isalpha - checks for alphabets
 * @c: characters for the program to check
 *
 * Return: 1(is an alpahbet), else 0
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
