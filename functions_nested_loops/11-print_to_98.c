#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - print to 98
 * @n : int to print from
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n < 98)
		printf("%d, ", n++);
	while (n > 98)
		printf("%d, ", n--);
	printf("98\n");
}
