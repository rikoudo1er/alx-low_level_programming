#include "lists.h"
#include <stdio.h>

/**
 * print_listint - prints all the elements of a listint_t list
 * @h:element in list
 * Return:the number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t nlen = 0;

	if (h)
	{
		while (h != NULL)
		{
			printf("%d \n", h->n);
			h = h->next;
			nlen++;
		}
	}
	return (nlen);
}
