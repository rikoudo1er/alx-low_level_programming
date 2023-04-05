#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h:element in list
 * Return:the number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t nlen = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nlen++;
		h = h->next;
	}

	return (nlen);
}
