#include <stdio.h>
#include "main.h"

/**
 * main- entry point
 * @argc: number of arguments
 * @argv: array of pinter to the string
 * Return: always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);
	return (0);
}
