#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1;
	int n2;
	int n3;

	n1 = 0;
	while (n1 < 9)
	{
		n2 = n1 + 1;
		while (n2 < 10)
		{
			n3 = n2 + 1;
			while (n3 < 10)
			{
				putchar(n1 + '0');
				putchar(n2 + '0');
				putchar(n3 + '0');
				if (n1 != 7)
				{
					putchar(',');
					putchar(' ');
				}
				else
					putchar('\n');
				n3++;
			}
			n2++;
		}
		n1++;
	}
	return (0);
}
