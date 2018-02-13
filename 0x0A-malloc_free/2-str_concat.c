#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i = 0, j = 0;

	concat = malloc(sizeof(s1) + sizeof(s2)); /* allocate memory */

	if (concat == NULL) /* validate memory */
		return (NULL);

	while (*(s1 + i))
	{
		*(concat + i) = *(s1 + i);
		i++;
	}
	while (*(s2 + j))
	{
		*(concat + i) = *(s2 + j);
		i++, j++;
	}
	*(concat + i) = '\0';

	return (concat);
}
