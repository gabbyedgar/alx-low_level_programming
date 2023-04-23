#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a list
 * @h: the list
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t x = 0
	const list_t *y = h;


	while (y)
	{
		y = y->next;
		x++;
	}
return (x);
}
