#include "holberton.h"

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to loom through
 * @needle: target substring to find
 * Return: pointer to index of string at first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	int x;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] == needle[0])
		{
			x = i;
			for (j = 0; needle[j] != '\0'; j++)
			{
				if (haystack[x] == needle[j])
					x++;
				else
					break;

				if (needle[j + 1] == '\0')
				{
					haystack = &haystack[i];
					return (haystack);
				}
			}
			break;
		}
	}
	return (0);
}
