#include "main.h"
/**
 * print_to 98 - print to 98
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n >= 98)
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
	while (n <= 98)
	{
		if (n < 0)
			_putchar((n * - 1) +'0');
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n++;
	}
}
