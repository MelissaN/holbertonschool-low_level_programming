#include "shell.h"

/**
 * _getline - prompt; after user types, get their input
 * Return: characters read
 */
int _getline(char **buffer)
{
	size_t size = 0;

	printf("$ ");

	if (getline(buffer, &size, stdin) == -1)
	{
		return (-1);
	}
	else
		return (size);
	/* free buffer that getline mallocs in main program */

}

/* ssize_t getline(char **lineptr, size_t *n, FILE *stream); */

/* alternative way is to use write, and not have size because getline */
/* dynamically mallocs. Make sure to free */
