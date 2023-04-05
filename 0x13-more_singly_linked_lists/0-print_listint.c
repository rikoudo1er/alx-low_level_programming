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
	const listint_t *ptr = NULL;

	ptr = h;
	while (ptr)
	{
			printf("%d \n", ptr->n);
			ptr = ptr->next;
			nlen++;
	}

	return (nlen);
}
