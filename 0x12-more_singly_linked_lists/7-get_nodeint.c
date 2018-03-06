#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node of listint_t linked list
 * @head: pointer to head pointer of linked list
 * @index: nth node
 * Return: nth node, or NULL if failed
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{

	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while ((i < index) && head != NULL) /* iterate until list ends */
	{
		head = head->next;
		i++;
	}

	if (i == index) /* check that index was within list size */
		return (head);

	return (NULL);
}
