#include "holberton.h"

/**
 * is_prime - recursively divide by higher divisor, skip even nums
 * @n: number to check if prime
 * @divisor: divisor
 * Return: 1 if prime, 0 if not, or recursive function call
 */

int is_prime(int n, int divisor)
{
	if (n % divisor == 0)
		return (1);
	else if (divisor < n)
		return (is_prime(n, divisor + 2));

	return (0);
}

/**
 * is_prime_number - check if prime
 * @n: number to check
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	int divisor = 1;

	if (n % 2 == 0 || n < 2)
		return (0);

	return (is_prime(n, divisor));
}
