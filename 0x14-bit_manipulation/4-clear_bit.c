#include "main.h"

/**
 * clear_bit - set value to 1 with given index
 * @n:pointer to unsigned int
 * @index: unsigned int index
 * Return: 1 if succes -1 in case of error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a = 1;

	if (index > sizeof(n) * 8)
		return (-1);
	a <<= index;
	*n &= ~a;
return (1);
}
