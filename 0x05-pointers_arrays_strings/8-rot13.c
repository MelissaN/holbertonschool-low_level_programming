#include "holberton.h"

/**
 * rot13 - encode string using rot13
 * @s: string to encode
 * Return: encoded string
 */

char *rot13(char *s)
{

	int i, add12;

	for (i = 0; s[i] != '\0'; i++)
	{
		
		if ((s[i] >= 'a' && s[i] <= 'z'))
		{
			s[i] = s[i] - 'z' + 'a';
		}
		else if ((s[i] >= 'A' && s[i] <= 'Z'))
		{
			s[i] = s[i] - 'Z' + 'A';
		}
	}

	return (s);
}
