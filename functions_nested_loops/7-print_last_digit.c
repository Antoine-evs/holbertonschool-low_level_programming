#include "main.h"
/**
 * print_last_digit - print last digit
 * @n : int to get last digit from
 *
 * Return: last digit of n
 */

int print_last_digit(int n)
{
	if (n == -2147483648)
	{
		_putchar('8');
		return (8);
	}
	if (n < 0)
		n *= -1;
	while (n > 10)
		n %= 10;
	_putchar(n + '0');
	return (n);
}
