#include "holberton.h"

/**
 * string_toupper - capitalize first letter of all words
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	/* check first index for capital */
	if (s[i] >= 'a' && s[i] <= 'z')
		s[i] = s[i] - 'a' + 'A';
	i++;

	while (s[i] != '\0') /* iterate through string */
	{

		/* if lowercase and prior char is separator, capitalize*/
		if ((s[i] >= 'a' && s[i] <= 'z') && (s[i-1] == ',' || s[i-1] == ';' || s[i-1] == '.' ||
			       s[i-1] == '!' || s[i-1] == '?' || s[i-1] == '"' ||
			       s[i-1] == '(' || s[i-1] == ')' || s[i-1] == '{' ||
			       s[i-1] == '}' || s[i-1] == ' '|| s[i-1] == '\t' || s[i-1] == '\n'))
			s[i] = s[i] - 'a' + 'A';
		i++;
	}

	return (s);
}
