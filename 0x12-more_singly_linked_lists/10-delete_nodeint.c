#include "lists.h"

/**
 * delete_nodeint_at_index - delete a node at a given position
 * @head: pointer to head pointer of linked list
 * @index: index to delete node
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{

	unsigned int i = 0;
	listint_t *tmp, *tmp2;

	/* account for empty list */
	if (*head == NULL)
		return (-1);

	tmp = *head;

	/* account for deleting beginning node */
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	/* iterate tmp to idx prior to idx we want to delete */
	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	/* account for idx out of range: don't delete and return */
	if (i != (index - 1) || tmp->next == NULL)
		return (-1);

	/* link prior idx before delete */
	tmp2 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp2);

	return (1);
}
