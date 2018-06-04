#include "sort.h"
/**
 * prints - prints left, right, and merged halves
 * @arr: original or tmp array
 * @side: left, right, or merged half
 * @start: starting index
 * @end: ending index
 */
void prints(int *arr, char *side, size_t start, size_t end)
{
	size_t i;

	printf("[%s]: ", side);
	for (i = start; i < end; i++)
	{
		if (i != (end - 1))
			printf("%d, ", arr[i]);
		else
			printf("%d\n", arr[i]);
	}

}
/**
 * rec_merge - recursively splits and merges halves
 * @array: original array
 * @sortArr: tmp array to hold sorted elements
 * @l: starting index
 * @r: ending index
 */
void rec_merge(int *array, int *sortArr, size_t l, size_t r)
{
	size_t i, l_half, r_half;
	size_t mid = (l + r) / 2;

	if (r - l <= 1)
		return;

	rec_merge(array, sortArr, l, mid);
	rec_merge(array, sortArr, mid, r);
	printf("Merging...\n");
	prints(array, "left", l, mid);
	prints(array, "right", mid, r);
	l_half = l;
	r_half = mid;
	for (i = l; i < r; i++)
	{
		if ((l_half < mid) &&
		    ((r_half == r) || (array[l_half] < array[r_half])))
		{
			sortArr[i] = array[l_half];
			l_half++;
		}
		else
		{
			sortArr[i] = array[r_half];
			r_half++;
		}
	}
	prints(sortArr, "Done", l, r);
	for (i = l; i < r; i++)
		array[i] = sortArr[i];
}
/**
 * merge_sort - sorts mergly
 * @array: array sort
 * @size: size of array
 */
void merge_sort(int *array, size_t size)
{
	int *sortArr;

	if (!(array) || size < 2)
		return;
	sortArr = malloc(sizeof(int) * size);
	if (!(sortArr))
		return;
	rec_merge(array, sortArr, 0, size);
	free(sortArr);
}
