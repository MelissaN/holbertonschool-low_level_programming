#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes node at given idx
 * @head: pointer to head of doubly linked list
 * @index: index
 * Return: 1 if successful, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del = NULL;

	/* do nothing if nothing to delete */
	if (head == NULL || *head == NULL)
		return (-1);

	del = *head;

	/* delete first node */
	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		if (*head != NULL)
			(*head)->prev = NULL;
		return (1);
	}

	/* delete nth node as long as within range of list */
	while ((index != 0) && (del->next != NULL))
	{
		index -= 1;
		del = del->next;
	}
	if (index == 0)
	{
		del->prev->next = del->next;
		if (del->next != NULL)
			del->next->prev = del->prev;
		free(del);
		return (1);
	}
	return (-1);
}
