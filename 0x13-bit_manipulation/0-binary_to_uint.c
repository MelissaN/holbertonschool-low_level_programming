#include "holberton.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int len = 0, i;
	unsigned int sum = 0;

	if (b == NULL)
		return (sum);

	/* find string length */
	while (b[len] != '\0')
		len++;
	len -= 1;

	/* iterate string and if '1' then multiply by power of 2 */
	/* get power of 2 via binary (e.g. 1<<2 = 100 in binary = 4) */
	i = 0;
	while (b[i])
	{
		if ((b[i] != '0') && (b[i] != '1'))
			return (sum);

		if (b[i] == '1')
			sum += (1 * (1 << len));
		i++;
		len--;
	}

	return (sum);
}

/*
 * alternative method not using bitwise but a power of 2
 *
 *
 * unsigned int binary_to_uint(const char *b)
 *{
 *
 *	int len = 0, pow = 1;
 *	unsigned int sum = 0, error = 0;
 *
 *	if (b == NULL)
 *		return (error);
 *
 *	while (b[len] != '\0') // find string length
 *		len++;
 *	len -= 1;
 *
 *	while (len >= 0) // iterate from back of string
 *	{
 *		if ((b[len] != '0') && (b[len] != '1'))
 *			return (error);
 *
 *		if (b[len] == '1') // add appropriate power of 2 if '1'
 *			sum += pow;
 *
 *		pow *= 2; // update power of 2
 *		len--;
 *	}
 *
 *	return (sum);
 *}
 */
