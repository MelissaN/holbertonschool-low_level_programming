#include "holberton.h"

/**
 * string_toupper - capitalize first letter of all words
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0') /* iterate through string */
	{
		if (s[i] >= 'A' && s[i] <= 'Z') /* if uppercase, next */
		{
			i++;
			while (s[i] != ',' && s[i] != ';' && s[i] != '.' &&
			       s[i] != '!' && s[i] != '?' && s[i] != '"' &&
			       s[i] != '(' && s[i] != ')' && s[i] != '{' &&
			       s[i] != '}' && s[i] != ' ' &&
			       s[i] != '\t' && s[i] != '\n')
				i++;
		}
		else if (s[i] >= 'a' && s[i] <= 'z') /* if lower, capitalize */
		{
			s[i] = s[i] - 'a' + 'A';
			i++;

			while (s[i] != ',' && s[i] != ';' && s[i] != '.' &&
			       s[i] != '!' && s[i] != '?' && s[i] != '"' &&
			       s[i] != '(' && s[i] != ')' && s[i] != '{' &&
			       s[i] != '}' && s[i] != ' '&&
			       s[i] != '\t' && s[i] != '\n')
				i++;
		}
		i++;
	}

	return (s);
}
