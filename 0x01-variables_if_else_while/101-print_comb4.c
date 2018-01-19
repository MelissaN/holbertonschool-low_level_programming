#include <stdio.h>

/**
 *main - Entry point, print 00 to 99
 *Return: Always 0 (Success)
 */

int main(void)
{
	int ones;
	int tens;
	int hundreds;

	for (hundreds = '0'; hundreds <= '9'; hundreds++) /*hundreds place*/
	{
		for (tens = (hundreds + 1); tens <= '9'; tens++) /*tens*/
		{
			for (ones = (tens + 1); ones <= '9'; ones++) /*ones*/
			{
				putchar(hundreds);
				putchar(tens);
				putchar(ones);
				if ((hundreds == '7')) /*new line*/
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
	}

	return (0);
}
