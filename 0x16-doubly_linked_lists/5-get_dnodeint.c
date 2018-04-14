#include "lists.h"

/**
 * get_dnodeint_at_index - get node at index
 * @head: pointer to head of doubly linked list
 * @index: given index
 * Return: pointer to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	/* countdown till index matches or end of list */
	while (index && head->next)
	{
		head = head->next;
		index -= 1;
	}
	if (index == 0)
		return (head);

	/* index out of range */
	return (NULL);
}
