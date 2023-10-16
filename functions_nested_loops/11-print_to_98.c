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
		n--;
	}
	while (n <= 98)
	{
		_putchar(n + '0');
		n++;
	}
}
