#include "lists.h"
#include <stdio.h>
/**
 * print_listint - Entry Point
 * @h: head
 * Return: 0
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}

	return (nodes);
}
