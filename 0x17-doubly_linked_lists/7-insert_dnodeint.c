#include "lists.h"
#include <stdlib.h>

/**
 * create_dnode - Creates a new dlistint_t node.
 * @n: Integer value for the new node.
 *
 * Return: Address of the new node, or NULL on failure.
 */
dlistint_t *create_dnode(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

/**
 * insert_at_beginning - Inserts a new node at the beginning of a list.
 * @h: Pointer to a pointer to the head of the list.
 * @new_node: Pointer to the new node.
 */
void insert_at_beginning(dlistint_t **h, dlistint_t *new_node)
{
	new_node->next = *h;
	if (*h != NULL)
		(*h)->prev = new_node;
	*h = new_node;
}

/**
 * insert_in_middle - Inserts a new node in the middle of a list.
 * @temp: Pointer to the current node before the insertion point.
 * @new_node: Pointer to the new node.
 */
void insert_in_middle(dlistint_t *temp, dlistint_t *new_node)
{
	new_node->prev = temp;
	new_node->next = temp->next;
	if (temp->next != NULL)
		temp->next->prev = new_node;
	temp->next = new_node;
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position.
 * @h: Pointer to a pointer to the head of the list.
 * @idx: Index where the new node should be added.
 * @n: Integer value for the new node.
 *
 * Return: Address of the new node, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;
	unsigned int count = 0;

	if (h == NULL)
		return (NULL);
	new_node = create_dnode(n);
	if (new_node == NULL)
		return (NULL);
	if (idx == 0)
	{
		insert_at_beginning(h, new_node);
		return (new_node);
	}
	temp = *h;
	while (temp != NULL && count < idx - 1)
	{
		temp = temp->next;
		count++;
	}
	if (temp == NULL)
	{
		free(new_node);
		return (NULL);
	}
	insert_in_middle(temp, new_node);
	return (new_node);
}
