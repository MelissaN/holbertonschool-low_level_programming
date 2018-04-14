#include "lists.h"
#include <stdlib.h>

/**
 * one_node_list_ - add one node to empty doubly linked list
 * @head: pointer to head of list
 * @new: pointer to new node
 */
void one_node_list_(dlistint_t **head, dlistint_t **new)
{
	*head = *new;
	(*new)->next = NULL;
	(*new)->prev = NULL;
}

/**
 * create_node_ - malloc and set data of new node
 * @n: node data
 * Return: address of new node
 */
dlistint_t *create_node_(const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;
	return (new);
}

/**
 * add_dnodeint - add node to front of doubly linked list
 * @head: pointer to head of list
 * @n: node data
 * Return: address of new node, or Null if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	/* malloc and set new node data */
	new = create_node_(n);

	/* account for empty linked list */
	if (*head == NULL)
	{
		one_node_list_(head, &new);
		return (new);
	}

	/* account for regular linked list */
	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;

	return (new);
}
