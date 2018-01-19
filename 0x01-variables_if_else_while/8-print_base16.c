#include <stdio.h>

/**
 *main - Entry point
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;
	int a_to_f = 97;

	while (n <= 57) /*print 0-9*/
	{
		putchar(n);
		n++;
	}

	while (a_to_f <= 102) /*print a-f to finish hexbase*/
	{
		putchar(a_to_f);
		a_to_f++;
	}

	putchar('\n');

	return (0);
}
