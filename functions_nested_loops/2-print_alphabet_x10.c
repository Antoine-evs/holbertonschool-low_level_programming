#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 * 
 * Return : void
 */

void print_alphabet_x10(void)
{
	char c;
	int i;

	i = 0;
	while (i < 11)
	{
		c = 'a';
		while (c <= 'z')
			_putchar(c++);
		_putchar('\n');
		i++;
	}
}
