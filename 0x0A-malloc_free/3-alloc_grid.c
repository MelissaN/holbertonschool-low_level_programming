#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: columns
 * @height: rows
 * Return: pointer to 2d array
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0) /* validate input */
		return (NULL);

	grid = malloc(height * sizeof(int *)); /*allocate memory for rows*/

	if (grid == NULL) /* validate memory */
		return (NULL);

	for (i = 0; i < height; i++) /*allocate memory for columns of each row*/
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL) /* validate memory */
		{
			for (i = 0; i < height; i++)
				free(grid[i]);
			free(grid);
			return (NULL);
		}
		for (j = 0; j < width; j++) /* set array values to 0 */
			grid[i][j] = 0;
	}

	return (grid);
}
