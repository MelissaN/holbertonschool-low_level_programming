#include "holberton.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}

	return (len);
}

/**
 * _idx_num_starts - find index where a digit is first found in string
 * @s: string to search
 * Return: integer index where digit is first found
 */

int idx_num_starts(char *s)
{
	int i;

	for (i = 0; i < _strlen(s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
			return i;
	}
	return (-1); /* return -1 if no digits found */
}

/**
 * _atoi - convert string to int
 * @s: string to convert
 * Return: integer
 */

int _atoi(char *s)
{

	int idx_digit_starts = (idx_num_starts(s));
	int negatives = 0, sign = 1; /* hold positive or negative */
	int digits_to_print = 0;
	int t = 1, i, num = 0;
	int digit = (idx_num_starts(s));

	if (idx_digit_starts < 0)
		return (0);
	else
	{
		i = 0;
		while (i < idx_digit_starts)
		{
			if (s[i++] == '-')
				negatives++;
		}

		if (negatives % 2 != 0)
			sign = -1;

		while ((s[idx_digit_starts] >= '0' && s[idx_digit_starts] <= '9')
		       && (idx_digit_starts <= _strlen(s)))
		{
			digits_to_print += 1;
			idx_digit_starts++;
		}

		i = 1;
		while (i < digits_to_print)
		{
			t *= 10;
			i++;
		}

		for (i = digit; i < (digit + digits_to_print); i++)
		{       num += (s[i] - '0') * t;
			t /= 10;
		}

		return (num * sign);
	}
}
