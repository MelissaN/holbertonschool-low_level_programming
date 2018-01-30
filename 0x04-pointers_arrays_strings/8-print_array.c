#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers, followed by a new line
 * @a: array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int counter;

	for (counter = 1; counter <= n; counter++)
	{
		if (counter < n)
			printf("%d, ", *a++);
		else
			printf("%d\n", *a++);
	}

}
