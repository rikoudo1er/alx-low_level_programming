#include "lists.h"

/**
 * free_listint2 - free list
 * @head:node;
 */

void free_listint2(listint_t **head)
{

	listint_t *node, *current_node;

	if (head)
	{
		current_node = *head;
		while (current_node != NULL)
		{
			node = current_node;
			current_node = current_node->next;
			free(node);
		}
		free(current_node);
		*head = NULL;
	}

}
