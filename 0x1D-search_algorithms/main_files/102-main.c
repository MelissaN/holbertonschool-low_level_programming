#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * main - Entry point
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	int array[] = {
		0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9
	};
	size_t size = sizeof(array) / sizeof(array[0]);

	printf("Found %d at index: %d\n\n", 3, interpolation_search(array, size, 3));
	printf("Found %d at index: %d\n\n", 7, interpolation_search(array, size, 7));
	printf("Found %d at index: %d\n", 999, interpolation_search(array, size, 999));

	int arr[35] = {
		0, 0, 1, 2, 2, 2, 2, 3, 3, 4, 4, 5, 6, 6, 7, 8, 8, 8, 9, 9,
		10, 11, 12, 12, 12, 19, 19, 19, 71, 71, 71, 81, 82, 83, 84
	};
	printf("Found at index: %d\n", interpolation_search(arr, 35, 123456789));
	printf("Found at index: %d\n", interpolation_search(NULL, 0, 0));
	return (EXIT_SUCCESS);
}
