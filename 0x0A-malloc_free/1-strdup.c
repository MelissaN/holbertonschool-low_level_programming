#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *duplicate_str;
	int i = 0;

	if (str == NULL) /* validate str input */
		return (NULL);
	duplicate_str = malloc(sizeof(str)); /* allocate memory */

	if (duplicate_str == NULL) /* validate memory */
		return (NULL);

	while (*(str + i))
	{
		*(duplicate_str + i) = *(str + i);
		i++;
	}
	*(duplicate_str + i) = '\0';

	return (duplicate_str);
}
