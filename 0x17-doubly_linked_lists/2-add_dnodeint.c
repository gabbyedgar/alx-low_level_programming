#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning
 *
 * @head: Head
 *
 * @n: Value
 *
 * Return: dlistint_t
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	if (!head)
		return (NULL);

	temp = malloc(sizeof(dlistint_t));
	if (!temp)
		return (NULL);

	temp->n = n;
	temp->prev = NULL;
	temp->next = *head;
	if (*head)
		(*head)->prev = temp;
	*head = temp;

	return (temp);
}
