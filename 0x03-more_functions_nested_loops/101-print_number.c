#include "holberton.h"

/**
 * print_number - print an integer, without using long, arrays, or pointers
 * @n: number to be printed
 */

void print_number(int n)
{
	int t = 1;
	int digit;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			n = -n;
			_putchar('-');
		}

		while (t < n)
			t *= 10;
		t /= 10;

		while (t >= 1)
		{
			digit = n / t;
			_putchar(digit + '0');
			n = (n - (t * digit));
			t /= 10;
		}
	}
}
