#include "lists.h"

/**
 * sum_listint - calculates sum of all data in the listint_t list
 * @head: first node in the linked list
 * Return: resulting of the sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

