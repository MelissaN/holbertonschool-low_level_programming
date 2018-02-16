#include <stdlib.h>
#include "holberton.h"

/**
 * realloc - allocate memory and set all values to 0
 * @ptr - pointer to the memory previously allocated (malloc(old_size))
 * @old_size - size previously allocated
 * @new_size - new size to reallocate
 * Return: pointer to reallocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;
	unsigned int i;

	if (new_size == 0 && ptr != NULL) /* free memory if reallocate 0 */
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size) /* return ptr if reallocating same old size */
		return (ptr);

	p = malloc(new_size); /* malloc and check error */
	if (p == NULL)
		return (NULL);

	for (i = 0; i < new_size; i++) /* fill in values from previous ptr */
		*((char *)p + i) = *((char *)ptr + i);

	return (p);
}
