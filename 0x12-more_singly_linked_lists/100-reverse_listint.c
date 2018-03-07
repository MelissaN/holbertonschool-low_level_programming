#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to head pointer of linked list
 * Return: pointer to first node of reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	/* account for no ptr and empty list */
	if (head == NULL || *head == NULL)
		return (NULL);

	/* iterate thorugh list to reverse linking */
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next; /* keep track of next node to move to */
		(*head)->next = prev; /* link current node's ptr to prev node */
		prev = *head; /* update previous node to be current node */
		*head = next; /* move current node to next node */
	}
	(*head) = prev; /* unlink last element from null and point backwards */

	return (*head);
}
