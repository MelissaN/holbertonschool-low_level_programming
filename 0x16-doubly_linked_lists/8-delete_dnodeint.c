#include "lists.h"

/**
 * delete_first_node - delete first node of doubly linked list
 * @head: pointer to head of list
 */
void delete_first_node(dlistint_t **head)
{
	if ((*head)->next == NULL)
	{
		free(*head);
		*head = NULL;
	}
	else
	{
		*head = (*head)->next;
		free((*head)->prev);
	}
}

/**
 * delete_this - delete this given node within doubly linked list
 * @del: pointer to node to delete
 */
void delete_this(dlistint_t *del)
{
	if (del->next == NULL)
	{
		del->prev->next = NULL;
		free(del);
	}
	else
	{
		del->prev->next = del->next;
		del->next->prev = del->prev;
	}
}
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

	/* delete first node */
	if (index == 0)
	{
		delete_first_node(head);
		return (1);
	}

	/* delete nth node as long as within range of list */
	del = *head;
	while ((index != 0) && (del->next != NULL))
	{
		index -= 1;
		del = del->next;
		if (index == 0)
		{
			delete_this(del);
			return (1);
		}
	}
	return (-1);
}
