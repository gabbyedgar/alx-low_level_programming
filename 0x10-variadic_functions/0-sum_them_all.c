#include <stdarg.h>

/**
 * sum_them_all - gets the sum of all arguments passed
 * @n: count of remaining arguments
 * Return: sumation of all arguments passed
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i, sum = 0;

	va_start(list, n);

	if (n == 0)
	{
		va_end(list);
		return (0);
	}

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
