#include "holberton.h"

/**
 * print_last_digit - print last digit of integer
 * @n: integer argument
 * Return: last digit of number
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;

       	_putchar('0' + (n % 10));


	/*int last_digit;

	last_digit = (n % 10);

	if (last_digit < 0)
	{
		last_digit *= -1;
	}

	_putchar('0' + last_digit);
	*/	return (n % 10);
}
