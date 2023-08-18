#include "lists.h"

/**
 * add_dnodeint - adds new node at beginning of the dlistint_t list
 * @head: ptr to first element of the list
 * @n: integer to be set in new node
 * Return: address of new element, NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
