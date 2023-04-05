#include "lists.h"

/**
 * listint_len - prints all the elements of a listint_t list
 * @h:element in list
 * Return:the number of node
 */

size_t listint_len(const listint_t *h)
{
	size_t nlen = 0;

	while (h)
	{
		nlen++;
		h = h->next;
	}

	return (nlen);
}
