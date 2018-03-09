#include "holberton.h"
#include <stdio.h>

/**
 * print_binary - converts unsigned int to binary
 * @n: unsigned int
 * Return: binary
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar(0 + '0');

	while (n > 0) /* match each rightmost bit to see if 1 or 0 */
	{
		if (n & 1)
			_putchar(1 + '0');
		else
			_putchar(0 + '0');

		n >>= 1;
	}
}
