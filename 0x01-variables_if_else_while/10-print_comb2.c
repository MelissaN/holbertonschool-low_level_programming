#include <stdio.h>

/**
 *main - Entry point, print 00 to 99
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;
	int tens = 48;

	while (tens <= 57)
	{
		while (n <= 57)
		{
			putchar(tens);
			putchar(n);
			if (n != 57)
			{
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		tens++;
		n = 48;
	}
	putchar('\n');

	return (0);
}
