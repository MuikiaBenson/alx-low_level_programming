#include "search_algos.h"


/**
 * binary_recursive - recusrive implementation of the binary search algorithm
 * @array: pointer to first position element of the array
 * @size: Size of array
 * @value: Value to search for
 * Return: index of value if found, otherwise -1
 */
size_t binary_recursive(int *array, size_t size, int value)
{
	size_t mid = size / 2;
	size_t aux;

	if (!array || size == 0)
		return (-1);

	printf("Searching in array: ");
	for (aux = 0; aux < size; aux++)
		printf("%d%s", array[aux], (aux != size - 1) ? ", " : "\n");

	if (mid && size % 2 == 0)
		mid--;
	if (value == array[mid])
		return (mid);
	if (value < array[mid])
		return (binary_recursive(array, mid, value));

	mid++;
	return (binary_recursive(array + mid, size - mid, value) + mid);
}


/**
 * binary_search - searches for a value in a sorted array
 * @array: pointer to the first element of array
 * @size: Size of array
 * @value: value to search for
 * Return: index of value in array if found, otherwise -1
 */
int binary_search(int *array, size_t size, int value)
{
	int el;

	el = binary_recursive(array, size, value);

	if (el >= 0 && array[el] != value)
		return (-1);
	return (el);
}
