#include "main.h"
/**
 * times_table - print times tables 0-9
 * @n : int to get last digit from
 *
 * Return: void 
 */

void times_table(void)
{
	char *ttables;
	int i;

	ttables = "0,  0,  0,  0,  0,  0,  0,  0,  0,  0\n"
		"0,  1,  2,  3,  4,  5,  6,  7,  8,  9\n"
		"0,  2,  4,  6,  8, 10, 12, 14, 16, 18\n"
		"0,  3,  6,  9, 12, 15, 18, 21, 24, 27\n"
		"0,  4,  8, 12, 16, 20, 24, 28, 32, 36\n"
		"0,  5, 10, 15, 20, 25, 30, 35, 40, 45\n"
		"0,  6, 12, 18, 24, 30, 36, 42, 48, 54\n"
		"0,  7, 14, 21, 28, 35, 42, 49, 56, 63\n"
		"0,  8, 16, 24, 32, 40, 48, 56, 64, 72\n"
		"0,  9, 18, 27, 36, 45, 54, 63, 72, 81\n";
	i = 0;
	while (ttables[i])
	{
		_putchar(ttables[i++]);
	}
}
