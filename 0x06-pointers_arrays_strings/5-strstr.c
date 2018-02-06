#include "holberton.h"

/**
 * _strstr - locate and return pointer to first occurence of substring
 * @haystack: string to search
 * @needle: target substring to search for
 * Return: pointer to index of string at first occurence of whole substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0, j = 0, x;

	if (needle[0] == '\0')
		return (haystack);

	while (haystack[i] != '\0') /* iterate through haystack */
	{
		/* if a byte matches first char of needle */
		/* interate through needle until match ends */
		if (haystack[i] == needle[0])
		{
			x = i;
			while (needle[j] != '\0')
			{
				if (haystack[x] == needle[j])
					x++, j++;
			}/* if matched throughout, return haystack */
			if (needle[j] == '\0')
			{
				haystack = &haystack[i];
				return (haystack);
			}
			else
				break;
		}
		i++;
	}
	return (0); /* No match */
}
