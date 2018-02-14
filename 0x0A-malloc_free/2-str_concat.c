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
	int len = 0, i = 0, j = 0;

        if (s1 == NULL)
                s1 = "";
        if (s2 == NULL)
                s2 = "";
	while (*(s1 + i))
		len++, i++;
	while (*(s2 + j))
		len++, j++;

        concat = malloc(sizeof(char) + len); /*determine memory alloc*/

	if (concat == NULL) /* validate memory */
		return (NULL);

	i = 0, j = 0;
	while (*(s1 + i)) /* concatenate */
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
