#include "lists.h"

/**
 * free_listint2 - frees a linked list, and sets head to NULL
 * @head: linked list
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL || !head) /* account for no linked list and no ptr */
		return;

	while (*head != NULL) /* have ptr keep track of head node and free */
	{
		ptr = *head;
		*head = ptr->next; /* move to next node while ptr frees prior */
		free(ptr);
	}
	*head = NULL;
}
