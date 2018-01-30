#include "holberton.h"

/**
 * main - returns the length of a string
 * @s: string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}
