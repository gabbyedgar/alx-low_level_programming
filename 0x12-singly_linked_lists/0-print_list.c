#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t x = 0;
	const list_t *y = h;

	while (y)
	{
		if (y->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", y->len, y->str);
		x++;
		y = y->next;
	}

	return (x);
}
