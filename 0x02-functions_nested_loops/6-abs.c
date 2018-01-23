#include "holberton.h"

/**
 * _abs - computer absolute value of integer
 * @n: integer argument
 * Return: absolute value
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return(n);
	}
	else if (n < 0)
	{
		n *= -1;
		return(n);
	}
	return (0);
}
