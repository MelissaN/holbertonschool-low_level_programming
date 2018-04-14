#include "lists.h"
#include <stdlib.h>

/**
 * one_node_list - add one node to empty doubly linked list
 * @head: pointer to head of list
 * @new: pointer to new node
 */
void one_node_list(dlistint_t **head, dlistint_t *new)
{
	*head = new;
	new->next = NULL;
	new->prev = NULL;
}

/**
 * create_node - malloc and set data of new node
 * @n: node data
 * Return: address of new node
 */
dlistint_t *create_node(const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;
	return (new);
}

/**
 * add_dnodeint_end - add node to end of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	/* malloc and set new node data */
	new = create_node(n);

	/* account for empty linked list */
	if (*head == NULL)
	{
		one_node_list(head, new);
		return (new);
	}

	/* traverse to last node and insert */
	last = *head;
	while (last->next != NULL)
		last = last->next;
	new->next = NULL;
	new->prev = last;
	last->next = new;

	return (new);
}
