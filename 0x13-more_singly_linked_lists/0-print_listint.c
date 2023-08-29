#include "lists.h"

/**
 * print_listint - prints all elements of the linked list
 * @h: the Linked list of type listint_t to print it
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num = 0;

	while (h)
	{
		printf("%d\n", h->n);
		num++;
		h = h->next;
	}

	return (num);
}

