#include "sort.h"
/**
 * counting_sort - counting sort algo
 * @array: array to sort
 * @size: size of array
 */
void counting_sort(int *array, size_t size)
{
	size_t i;
	int j, k, num, dup;
	int *counts;

	if (array == NULL || size < 2)
		return;
	k = array[0]; /* find max num to malloc size of new array */
	for (i = 1; i < size; i++)
	{
		if (array[i] > k)
			k = array[i];
	}
	counts = malloc(sizeof(int) * (k + 1));
	if (counts == NULL)
		return;
	for (j = 0; j < (k + 1); j++) /* memset counts array to 0 */
		counts[j] = 0;
	for (i = 0; i < size; i++) /* input counts */
	{
		num = array[i];
		counts[num] += 1;
	}
	for (j = 0; j < k; j++) /* update counts array */
	{
		counts[j + 1] += counts[j];
	}
	print_array(counts, k + 1);
	for (i = 0, j = 0; j < k; j++) /* replace array with sorted */
	{
		if ((j == 0) && counts[j] != 0)
		{
			for ((dup = counts[j]); dup > 0; dup--)
				array[i++] = j;
		}
		if (counts[j + 1] > counts[j])
		{
			for ((dup = counts[j + 1] - counts[j]); dup > 0; dup--)
				array[i++] = (j + 1);
		}
	}

	free(counts);
}
