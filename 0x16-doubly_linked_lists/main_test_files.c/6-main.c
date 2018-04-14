#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;
	int sum;

	/* test regular list */
	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);
	free_dlistint(head);

	/* test empty list */
	head = NULL;
	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);

	/* test one node list */
	head = NULL;
	add_dnodeint_end(&head, 98);
	sum = sum_dlistint(head);
	printf("sum = %d\n", sum);

	return (EXIT_SUCCESS);
}
