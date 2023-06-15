#include "lists.h"

/**
 * free_dlistint - Frees a linked dlistint_t list.
 * @head: struct
 * Return: no return
 *
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
