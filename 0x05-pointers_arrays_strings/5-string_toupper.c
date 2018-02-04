#include "holberton.h"

/**
 * string_toupper - capitalize all letters in string
 * @s: string to manipulate
 * Return: string with all letters capitalized
 */

char *string_toupper(char *s)
{

	int i = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[i] = s[i] - 'a' + 'A';
	}
	return (s);
}

/* another method with pointer notation

char *string_toupper(char *s)
{
        while (*s) //if s exists will omit null terminator
	    if (*s >= 'a' && *s <= 'z')
	        *s = *s -'a' + 'A';
	    s++;

}
*/
