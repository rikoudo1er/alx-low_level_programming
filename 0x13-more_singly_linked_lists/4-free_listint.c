#include "lists.h"

/**
 * free_listint - free list
 * @head:node;
 */

void free_listint(listint_t *head)
{

	listint_t *node;

	if (head)
	{
		while (head->next != NULL)
		{
			node = head;
			head = head->next;
			free(node);
		}
		free(head);
	}

}
