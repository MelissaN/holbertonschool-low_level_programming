#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"

/**
 * main - print product of argument numbers
 * @argc: argument counter
 * @argv: numbers to multiply
 * Return: 0 on success, 1 if two arguments not given
 */

int main(int argc, char *argv[])
{

	/* validate input */
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/* mulitply two arguments passed via cmd line */
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
