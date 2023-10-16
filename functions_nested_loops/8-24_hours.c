#include "main.h"
/**
 * jack_bauer - print from 00:00 to 23:59
 *
 * Return: void
 */

void jack_bauer(void)
{
	int h;
	int min;

	h = 0;
	while (h < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar(h / 10 + '0');
			_putchar(h % 10 + '0');
			_putchar(':');
			_putchar(min / 10 + '0');
			_putchar(min % 10 + '0');
			min++;
		}
		h++;
	}

}
