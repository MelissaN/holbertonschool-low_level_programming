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

/**
 * print_rev - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char *tmp_beg = s;
	char *tmp_end = (s + _strlen(s) - 1);
	char tmp;

	while (tmp_end > tmp_beg)
	{
		tmp = *tmp_beg;
		*tmp_beg = *tmp_end;
		*tmp_end = tmp;
		tmp_beg++, tmp_end--;
	}
}
