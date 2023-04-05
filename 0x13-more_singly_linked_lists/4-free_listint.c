#include "lists.h"

/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *gb, *gb2;

	gb = head;
	while (gb != NULL)
	{
		gb2 = gb->next;
		free(gb);
		gb = gb2;
	}
}
