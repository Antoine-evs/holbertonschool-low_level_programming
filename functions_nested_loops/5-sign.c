#include "main.h"
/**
 * _islower - is char lowercase
 * @n : int to evaluate
 *
 * Return: 1 if +, -1 if -, 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_puthchar('+');
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
