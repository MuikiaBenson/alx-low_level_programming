#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints  natural numbers from a to 98
 * @a: Staring point
 * Return: Always 0
 */

void print_to_98(int a)
{
	if (a <= 98)
	{
	for (; a <= 98; a++)
	{
	if (a == 98)
	{
	printf("%d", a);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", a);
	}
	}
	}
	else
	{
	for (; a >= 98; a--)
	{
	if (a == 98)
	{
	printf("%d", a);
	printf("\n");
	break;
	}
	else
	{
	printf("%d, ", a);
	}
	}
	}

}

