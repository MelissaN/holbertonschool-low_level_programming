#include <stdio.h>

/**
 *main - Entry point, print 00 to 99
 *Return: Always 0 (Success)
 */

int main(void)
{
	int tens;
	int ones;

	for (tens = 48; tens <= 57; tens++) /*print tens place*/
	{
		for (ones = 48; ones <= 57; ones++) /*print ones place*/
		{
			putchar(tens);
			putchar(ones);
			if (!((tens == 57) && (ones == 57))) /*skip comma at end*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
