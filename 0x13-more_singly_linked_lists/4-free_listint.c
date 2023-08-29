#include "lists.h"

/**
 * free_listint - frees the linked list declared
 * @head: listint_t the list to be freed
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

