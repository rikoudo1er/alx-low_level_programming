#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list;
 * @head:node
 * Return:returns the head node’s data (n).
 */

int pop_listint(listint_t **head)
{

	int n = 0;
	listint_t *node = *head;

	if (head == NULL || *head == NULL)
		return (n);

	n = node->n;
	node = node->next;
	free(*head);
	*head = node;

	return (n);
}


