#include "holberton.h"

/**
 * clear_bit - clear bit to 0 at given index
 * @n: number
 * @index: index within binary number
 * Return: 1 if success, or -1 if error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max_bits;
	unsigned long int mask = 1;

	/* validate index is not out of range */
	max_bits = (sizeof(unsigned long int) * 8);
	if (index > max_bits)
		return (-1);

	/* create mask with 0 at index (...11011...) to work on that index */
	mask = ~(mask << index);
	*n = (*n & mask);

	return (1);
}
