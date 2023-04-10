#include "main.h"

/**
 * flip_bits - number of bits you would need to flip
 * to get from one number to another
 * @n: parameter
 * @m: destiny
 * Return: nflips
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int g;
	int i = 0;

	g = n ^ m;
	while (g >= 1)
	{
		if ((g & 1) == 1)
		i++;
		g >>= 1;
	}
	return (i);
}
