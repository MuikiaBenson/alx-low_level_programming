#include "main.h"

/**
 *print_alphabet - prints lowercase alphabets
 *
 *Return: void (no parameters)
 */

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
