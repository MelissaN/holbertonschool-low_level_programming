#include "holberton.h"

/**
 * increment_root - increment potential root by one to retest if square root
 * @n: number to find square root of
 * @root: test this root
 * Return: natural square root, or -1 if not natural root
 */

int increment_root(int n, int root)
{
	int product = root * root;

	if (product < n)
		return (increment_root(n, root - 1));
	else if (product == n)
		return (root);
	else
		return (-1);
}

/**
 * decrement_root - decrement potential root by one to retest if square root
 * @n: number to find square root of
 * @root: test this root
 * Return: natural square root, or -1 if not natural root
 */

int decrement_root(int n, int root)
{
	int product = root * root;

	if (product > n)
		return (decrement_root(n, root - 1));
	else if (product == n)
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
	int root = n / 2;
	int product = root * root;

	if (n < 0)
		return (-1);

	if (product < n)
		return (increment_root(n, root + 1));
	else if (product > n)
		return (decrement_root(n, root - 1));
	else if (product == n)
		return (root);

	return (0);
}
