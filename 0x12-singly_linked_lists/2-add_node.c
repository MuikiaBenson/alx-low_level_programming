#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds node at the beginning of a list
 * @head: linked list
 * @str: string to append to the node
 *
 * Return: address of the new list on sucess else NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[len])
		len++;

	new->len = len;
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	return (new);
}
