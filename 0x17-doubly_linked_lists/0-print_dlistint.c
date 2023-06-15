#include "lists.h"
#include <stdio.h>

/**
 * listint_print - print all the elements of a dlistint_t list
 * @h: linkedlist pointer
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t a;

	for (a = 0; h != NULL; a++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (a);
}
