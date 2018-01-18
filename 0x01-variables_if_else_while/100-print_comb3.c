#include <stdio.h>

/**
 *main - Entry point, print 00 to 99
 *Return: Always 0 (Success)
 */

int main(void)
{
	int n = 48;
	int tens = 48;
	int skip_digit_combos = 0;

	while (tens <= 57) /*increment tens place*/
	{
		while (n <= 57) /*increment ones place*/
		{
			if (tens != n) /*print all but duplicates 00,11,...*/
			{
				putchar(tens);
				putchar(n);
				putchar(',');
				putchar(' ');
			}
			n++;
		}
		tens++;
		skip_digit_combos += 1; /*skip same digit combos, 10 same as 01*/
		n = 48 + skip_digit_combos;
	}
	putchar('\n');

	return (0);
}
