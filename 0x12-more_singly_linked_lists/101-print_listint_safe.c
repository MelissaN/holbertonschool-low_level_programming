#include "lists.h"

/**
 * print_listint_safe - prints list with addresses
 * @head: pointer to head pointer of linked list
 * Return: number of nodes in list, exit(98) if failed
 */

/* NOTE: code only tackles first part of 101-main.c file task */

size_t print_listint_safe(const listint_t *head)
{
	size_t num_nodes = 0;
	const listint_t *tmp;

	if (head == NULL)
		return (0);

	tmp = head;
	while (tmp != NULL)
	{
		printf("[%p] %d\n", (void *)tmp, tmp->n);
		num_nodes += 1;
		tmp = tmp->next;
	}

	return (num_nodes);
}
