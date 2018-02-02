#include "holberton.h"

/**
 * _strcmp - compare two strings
 * @s1: one string
 * @s2: one string
 * Return: int that tells num spaces in between
 */

int _strcmp(char *s1, char *s2)
{
	int difference, i = 0;

	if (*(s1 + i) == *(s2 + i))
	{
		i++;
	}

	difference = (*(s1 + i) - *(s2 + i));

	return (difference);
}
