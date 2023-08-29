#include "lists.h"

/**
 * add_nodeint - adds a new node at beginning of the linked list
 * @head: pointer to first node in a list
 * @n: data to insert it in that new node
 * Return: pointer to the new node, or NULL if the list fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

