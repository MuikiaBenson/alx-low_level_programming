#include <stdio.h>

/**
 * main- this is the main function
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		putchar(a + '0');
	}

	putchar('\n');
	return (0);
}
