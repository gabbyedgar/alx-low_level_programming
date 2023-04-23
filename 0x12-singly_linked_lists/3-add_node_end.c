#include "lists.h"
/**
 * add_node_end - Add a new node at the end of a list.
 * @head: Address of the first node of a list.
 * @str: Address of the string to insert into the new node.
 * Return: Address of the new node.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *a, *b;
	size_t x;

	a = malloc(sizeof(list_t));
	if (!a)
		return (NULL);

	while (str[len])
		len++;
	a->str = strdup(str);

	a->len = x;
	a->next = NULL;
	b = *head;

	if (b == NULL)
	{
		*head = a;
	}
	else
	{
		while (a->next != NULL)
			b = b->next;
			b->next = a;
	}

	return (*head);
}
