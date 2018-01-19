#include <stdio.h>

/**
 *main - Entry point, print 00 to 99
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ones;
	int tens;

	for (tens = '0'; tens <= '9'; tens++) /*increment tens*/
	{
		for (ones = (tens + 1); ones <= '9'; ones++) /*one's ten+1*/
		{
			putchar(tens);
			putchar(ones);

			if ((tens == '8') && (ones == '9')) /*new line*/
			{
				putchar('\n');
			}
			else /*if not last num, separate wtih commas*/
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	return (0);
}
