#include "main.h"

/**
 * puts_half- Prints half of a string
 * @str: string
 * Return: nohing
 */
void puts_half(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++;
	}
	if (a % 2 == 1)
	{
	b = (a - 1) / 2;
	}
	else
	{
		b = a / 2;
	}
	for (; b < a; b++)
	{
		_putchar(str[b]);
	}
	_putchar('\n');
}