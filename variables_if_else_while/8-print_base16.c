#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *base16 = "0123456789abcdef\n";
	int i;

	i = 0;
	while (base16[i])
		putchar(base16[i++]);
}
