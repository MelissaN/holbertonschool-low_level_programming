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
	dlistint_t *node;

	head = NULL;
	add_dnodeint_end(&head, 0);
	add_dnodeint_end(&head, 1);
	add_dnodeint_end(&head, 2);
	add_dnodeint_end(&head, 3);
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 98);
	add_dnodeint_end(&head, 402);
	add_dnodeint_end(&head, 1024);
	print_dlistint(head);
	node = get_dnodeint_at_index(head, 0);
	printf("%d\n", node->n);
	node = get_dnodeint_at_index(head, 2);
	printf("%d\n", node->n);
	node = get_dnodeint_at_index(head, 5);
	printf("%d\n", node->n);
	node = get_dnodeint_at_index(head, 7);
	printf("%d\n", node->n);
	node = get_dnodeint_at_index(head, 300);
	/* should segfault because we're returning null if index out of range */
	printf("%d\n", node->n);
	free_dlistint(head);
	head = NULL;
	return (EXIT_SUCCESS);
}
