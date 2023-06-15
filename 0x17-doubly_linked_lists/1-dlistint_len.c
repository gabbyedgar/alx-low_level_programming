#include "lists.h"

/**
* dlistint_len - returns the number of elements in
 * a double linked list
 * * @h: pointer to the beginning of a linked list
 *
 * Return: number of nodes 
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
