#include <stdio.h>
/**
 * main - Prints all possibel combinations of a single-digit number
 * Return: Always 0
 */
int main(void)
{
	int n;

	for (n = 48; n <= 56; n++)
	{
		for (m = 49; m <= 57; m++)
		{
			if (m > n)
			{
				putchar(n);
				putchar(m);
				if (n != 56 || m != 57)
				{
					putchar(',');
					putchar(',');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

