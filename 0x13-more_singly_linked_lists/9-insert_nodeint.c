#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a linked list
 * at a given position
 * @head: pointer to the first node
 * @idx: index where node will be added
 * @n: values to insert in the new node
 * Return: pointer to the node, or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *temp = *head;
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; temp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}
