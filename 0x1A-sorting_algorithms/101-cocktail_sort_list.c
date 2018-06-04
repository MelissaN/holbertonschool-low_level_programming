#include "sort.h"
/**
 * swap - swaps both
 * @p: first node to swap
 * @c: second node to swap
 * @list: list to set null or not
 */
void swap(listint_t *p, listint_t *c, listint_t **list)
{
	if (!(p->prev))
	{
		p->next = c->next;
		if (c->next)
			c->next->prev = p;
		c->next = p;
		c->prev = NULL;
		p->prev = c;
		*list = c;
	}
	else
	{
		c->prev->next = c->next;
		if (c->next)
			c->next->prev = c->prev;
		p->prev->next = c;
		c->prev = p->prev;
		p->prev = c;
		c->next = p;
	}
}

/**
 * cocktail_sort_list - inserts right unsorted side into left sorted side
 * @list: doubly linked list to sort
 */
void cocktail_sort_list(listint_t **list)
{
	listint_t *c, *nextnode;
	int swapped;

	if (list == NULL || !(*list) || (*list)->next == NULL)
		return;

	c = (*list);
	do {
		swapped = 0;
		while (c->next)
		{
			nextnode = c->next;
			if (nextnode && c->n > nextnode->n)
			{
				swap(c, nextnode, list);
				swapped = 1;
				print_list((*list));
			}
			else
				c = c->next;
		}
		c = c->prev;
		while (c->prev)
		{
			nextnode = c->prev;
			if (nextnode && c->n < nextnode->n)
			{
				swap(nextnode, c, list);
				swapped = 1;
				print_list((*list));
			}
			else
				c = c->prev;
		}
		c = c->next;
	} while (swapped);
}
