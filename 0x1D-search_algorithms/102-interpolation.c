#include "search_algos.h"

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
 * interpolation_search - like binary search, but use idx based on formula
 * @array: given array of ints
 * @size: size of array
 * @value: value to search for
 * Return: index at which value's found
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0;
	size_t r = size - 1;
	size_t pos;

	if (array == NULL)
		return (-1);

	pos = l + (((double)(r - l) / (array[r] - array[l]))
		   * (value - array[l]));
	while (pos < size)
	{
		print_i(array, pos);
		if (array[pos] == value)
			return (pos);
		else if (array[pos] < value)
			l = pos + 1;
		else
			r = pos - 1;
		pos = l + (((double)(r - l) / (array[r] - array[l]))
			   * (value - array[l]));
	}
	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
