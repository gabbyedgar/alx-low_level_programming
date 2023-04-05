#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
size_t i = 0;
const listint_t *temp, *node;

node = head;
while (node != NULL)
{
printf("[%p] %d\n", (void *)node, node->n);
temp = node;
node = node->next;
i++;
if (temp <= node)
{
printf("-> [%p] %d\n", (void *)node, node->n);
break;
}
}
return (i);
}
