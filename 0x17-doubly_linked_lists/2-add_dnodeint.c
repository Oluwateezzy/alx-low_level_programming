#include "lists.h"
/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to the head node of the list.
 * @n: The value to be stored in the new node.
 *
 * Return: Pointer to the new head node of the list.
 */
dlistint_t *add_dnodeint(dlistint_t **head, int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->prev = NULL;
	new->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = new;
	}
	*head =  new;

	return (new);
}
