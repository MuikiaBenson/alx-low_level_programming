#include <stdio.h>

/**
 * main- Entry point (main function)
 *
 * Return: always 0 (Success)
 */

int main(void)
{
	int alp;

	for (alp = 'z'; alp >= 'a'; alp--)
	{
		putchar(alp);
	}

	putchar('\n');
	return (0);
}
