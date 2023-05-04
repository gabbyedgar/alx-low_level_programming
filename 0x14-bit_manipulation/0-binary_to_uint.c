#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i = 0;

	if (b == NULL)
	{
		return 0;
	}
	while (b[i] != '\0')
	{
	if (b[i] == '0')
	{
		num = (num << 1) | 0;
	}
	else if (b[i] == '1')
	{
		num = (num << 1) | 1;
	}
	else
	{
		return 0;
	}
	i++;
	}
return num;
}
