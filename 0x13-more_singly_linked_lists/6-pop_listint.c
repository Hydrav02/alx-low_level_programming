#include "lists.h"

/**
 * pop_listint - deletes a head node of the linked list declared
 * @head: pointer to first element in a linked list
 * Return: data inside the elements that was deleted earlier,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

