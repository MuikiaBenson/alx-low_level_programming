#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes -print opcodes
 * @a: address to the main func
 * @n: number of bytes
 *
 * Return: void
 */

void print_opcodes(char *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%.2hhx", a[i];

		if (i < n - 1)
		printf(" ");
	}
	printf("\n");
}

/**
 * main -main func
 * @argc: arguments count
 * @argv: array of pointer
 * Return: 0 on Success
 */

int main(int argc, char **argv)
{
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	j = atoi(argv[1]);
	if (j < 0)
	{
		printf("Error\n");
		exit(2);
	}
	print_opcodes((char *)&main, n);
	return (0);
}
