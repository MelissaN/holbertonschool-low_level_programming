#include "holberton.h"

/**
 * increment_root - increment potential root by one to retest if square root
 * @num: number to find square root of
 * @root: test this root
 * Return: natural square root, or -1 if not natural root
 */

int increment_root(unsigned int num, int root)
{
	unsigned long product = root * root;

	if (product < num)
		return (increment_root(num, root - 1));
	else if (product == num)
		return (root);
	else
		return (-1);
}

/**
 * decrement_root - decrement potential root by one to retest if square root
 * @num: number to find square root of
 * @root: test this root
 * Return: natural square root, or -1 if not natural root
 */

int decrement_root(unsigned int num, int root)
{
	unsigned long product = root * root;

	if (product > num)
		return (decrement_root(num, root - 1));
	else if (product == num)
		return (root);
	else
		return (-1);
}

/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 * Return: natural square root, or -1 if not natural root
 */

int _sqrt_recursion(int n)
{
	unsigned int num = n;
	int root = n / 2;
	unsigned long product = root * root;

	if (product < num)
		return (increment_root(num, root + 1));
	else if (product > num)
		return (decrement_root(num, root - 1));
	else if (product == num)
		return (root);

	return (-1);
}
