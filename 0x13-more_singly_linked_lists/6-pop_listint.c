#include "lists.h"

/**
 * pop_listint - deletes the head node of a liniked list
 * @head: pointer
 *
 * Return: deleted data or 0 if list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}
