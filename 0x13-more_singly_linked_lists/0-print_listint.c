#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all elements of a listint_t list.
 * @h: Apointer to the head of a list_t list.
 *
 * Return: The power of node in the list_t list.
 */
size_t print_listint(const listint_t *h)
{
	size_t node =0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n)
			h = h->next;
	}

	return (nodes)
}
