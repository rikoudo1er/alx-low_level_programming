#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: node
 * @n: data
 * Return:the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node = NULL, *current_node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;
	node->next = NULL;
	if (*head == NULL)
		*head = node;
	else
	{
		current_node = *head;
		while (current_node->next != NULL)
			current_node = current_node->next;

		current_node->next = node;
	}
	return (node);

}
