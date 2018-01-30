#include "holberton.h"

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		str++;
	}

	_putchar('\n');
}
