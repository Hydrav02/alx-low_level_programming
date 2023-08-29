#include "lists.h"

/**
 * listint_len - returns number of the elements in the linked lists
 * @h: the linked list of type listint_t to traverse
 * Return: number of nodes in list
 */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		num++;
		h = h->next;
	}

	return (num);
}

