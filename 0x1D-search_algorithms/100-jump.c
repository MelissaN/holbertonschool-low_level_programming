#include "search_algos.h"

/**
 * print_range - helper func to print at each check
 * @i: index before jump
 * @j: index after jump
 */
void print_range(size_t i, size_t j)
{
	printf("Value found between indexes [%lu] and [%lu]\n", i, j);
}

/**
 * print_i - helper func to print idx each check
 * @array: array
 * @i: index checked
 */
void print_i(int *array, size_t i)
{
	printf("Value checked array[%lu] = [%d]\n", i, array[i]);
}

/**
 * jump_search - find square root, jump steps to find match, end linear search
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int jump_search(int *array, size_t size, int value)
{
	size_t jumps = sqrt(size);
	size_t i = 0;
	size_t j = 0;

	if (!array)
		return (-1);
	while (j <= size)
	{
		if (j != 0)
			print_i(array, i);
		if (array[j] >= value)
		{
			print_range(i, j);
			while (i <= j)
			{
				print_i(array, i);
				if (array[i] == value)
					return (i);
				i++;
			}
			return (-1);
		}
		if (j + jumps + jumps > size)
		{
			print_i(array, j);
			print_range(j, j + jumps);
			while (j < size)
			{
				print_i(array, j);
				if (array[j] == value)
					return (j);
				j++;
			}
			return (-1);

		}
		i = j;
		j += jumps;
	}
	return (-1);
}
