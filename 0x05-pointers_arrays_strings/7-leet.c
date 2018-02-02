#include "holberton.h"

/**
 * leet - encode string into 1337 leet
 * @s: string to manipulate
 * Return: string
 */

char *leet(char *s)
{

	int a[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int b[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	int i, j;

	for (j = 0; s[j] != '\0'; j++)
	{
		for (i = 0; a[i] != '\0'; i++)
		{
			if (s[j] == a[i])
				s[j] = b[i];
		}
	}

	return (s);
}
