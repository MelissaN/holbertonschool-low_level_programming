#include "holberton.h"

/**
 * string_toupper - capitalize first letter of all words
 * @s: string to manipulate
 * Return: string
 */

char *cap_string(char *s)
{
	int i = 0;

        for (i = 0; s[i] != '\0'; i++)
        {
                if (s[i] >= 'a' && s[i] <= 'z')
                        s[i] = s[i] - 'a' + 'A';

		
        }
        return (s);
/*
	for (i = 0; s[i] != '\0';)
        {
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 'a' + 'A';
			i++;
			if (s[i] == '\0')
				return (s);
			else
			{
				while (s[i] != ',' && s[i] != ';' && s[i] != '.' &&
				       s[i] != '!' && s[i] != '?' && s[i] != '"' &&
				       s[i] != '(' && s[i] != ')' && s[i] != '{' &&
				       s[i] != '}' && s[i] != ' ')
					i++;
			}
		}
		i++;
	}

	return (s);*/
}
