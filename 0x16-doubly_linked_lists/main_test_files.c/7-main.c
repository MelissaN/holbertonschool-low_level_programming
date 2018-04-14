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

	/* test empty list, insert 0th idx --> should create new list*/
	head = NULL;
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 0, 4096);
	print_dlistint(head);
	free_dlistint(head);

	/* test empty list, insert 99th idx --> should segfault; null ptr */
/*	head = NULL;                               */
/*	print_dlistint(head);                      */
/*	printf("-----------------\n");             */
/*	insert_dnodeint_at_index(&head, 99, 4096); */
/*	print_dlistint(head);                      */
/*	free_dlistint(head);                       */

	/* test one node, insert 0th idx --> should add at beginning */
	head = NULL;
 	add_dnodeint_end(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 0, 4096);
	print_dlistint(head);
	free_dlistint(head);

	/* test one node, insert 1st idx --> should add at end */
	head = NULL;
 	add_dnodeint_end(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 1, 4096);
	print_dlistint(head);
	free_dlistint(head);

	/* test one node, insert 2nd idx --> should do nothing */
	head = NULL;
 	add_dnodeint_end(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	insert_dnodeint_at_index(&head, 2, 4096);
	print_dlistint(head);
	free_dlistint(head);

 	/* test regular insert in the middle */
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
 	printf("-----------------\n");
 	insert_dnodeint_at_index(&head, 5, 4096);
 	print_dlistint(head);
 	free_dlistint(head);

	head = NULL;
	return (EXIT_SUCCESS);
}
