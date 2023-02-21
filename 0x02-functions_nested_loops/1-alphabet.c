#include "main.h"
/**
 * printalphabet - print all alphabet in lowercase
 */

void Print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}
