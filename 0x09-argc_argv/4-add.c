#include <stdio.h> /* printf */
#include <stdlib.h> /* atoi */
#include <stdbool.h> /* bool data type */
#include <string.h>
#include "holberton.h"

#define TRUE 1
#define FALSE 0

/**
 * is_num - iterate through each argv to test if it's a number
 * @argvv: a argv
 * Return: true only if entire string is a number, false if not
 */

bool is_num(char *argvv)
{
	int j = 0;

	for (j = 0; argvv[j]; j++)
	{
		if (!(argvv[j] >= '0' && argvv[j] <= '9'))
			return (FALSE);
	}
	return (TRUE);
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument wasn't a number
 */

int main(int argc, char *argv[])
{
	int i = 1;
	int sum = 0;

	/* validate input */
	if (argc == 1)
	{
		printf("0\n");
		return (1);
	}

	/* check all arguments to add numbers see if number */
	while (i < argc)
	{
		if (is_num(argv[i]))
			sum += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);

	return (0);
}
