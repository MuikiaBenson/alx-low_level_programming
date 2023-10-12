#include "main.h"

/**
 * print_alphabet_x10- This function prints all alphabets
 *
 * Return: void (no parameters)
 */

void print_alphabet_x10(void)
{
	int a = 0;

	while (a < 10)
	{
		char b = 'a';

		while (b <= 'z')
		{
			_putchar(b);
			b++;
		}

	_putchar('\n');

	a++;
	}
}
