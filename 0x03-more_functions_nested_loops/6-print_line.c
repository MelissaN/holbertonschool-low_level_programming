#include "holberton.h"

/**
 * print_line - print the character "_" n times to draw a line
 * @n: number of characters to draw
 */

void print_line(int n)
{
	int draw;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');

}
