#include "main.h"
#include <unistd.h>
/**
 * putchar - writes the character c to stdout
 * @c: the character to print
 * return: on success 1
 * on error, 1 is returned and error is set appropriatel
 */
int _putchar (char c)
{
	return (write(1, &c, 1));
}
