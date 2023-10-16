#include "main.h"
/**
 * print_sign - is n pos, neg or 0
 * @n : int to evaluate
 *
 * Return: 1 if +, -1 if -, 0 if 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
                return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}
