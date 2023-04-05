#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *gab, *gab2;

	gab = malloc(sizeof(listint_t));
	if (gab == NULL)
		return (NULL);

	gab->n = n;
	gab->next = NULL;

	if (*head == NULL)
	{
		*head = gab;
		return (gab);
	}

	gab2 = *head;
	while (gab2->next)
		gab2 = gab2->next;
	gab2->next = gab;
	return (gab);
}
