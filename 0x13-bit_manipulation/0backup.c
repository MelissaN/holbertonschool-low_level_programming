#include "holberton.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int len = 0, pow = 1;
	unsigned int sum = 0, error = 0;

	if (b == NULL)
		return (error);

	while (b[len] != '\0') /* find string length */
		len++;
	len -= 1;

	while (len >= 0) /* iterate from back of string */
	{
		if ((b[len] != '0') && (b[len] != '1'))
			return (error);

		if (b[len] == '1') /* add appropriate power of 2 if '1' */
			sum += pow;

		pow *= 2; /* update power of 2 */
		len--;
	}

	return (sum);
}
