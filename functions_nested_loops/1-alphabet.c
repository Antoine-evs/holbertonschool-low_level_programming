#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return : void
 */

void print_alphabet(void)
{
	char c;

	c = 'a';
	while (c <= 'z')
		_putchar(c++);
	_putchar('\n');
}
