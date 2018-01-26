#include "holberton.h"

/**
 * print_diagonal - print character "\" n times
 * @n: number of characters to draw
 */

void print_diagonal(int n)
{
	int draw;

	if (n > 0)
	{
		for (draw = 1; draw <= n; draw++)
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');

}
