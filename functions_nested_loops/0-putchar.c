#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char *str;
	int i;

	str = "_putchar\n";
	i = 0;
	while (str[i])
		putchar(str[i++]);
	return (0);
}
