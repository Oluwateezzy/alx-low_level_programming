#include "lists.h"
/**
 * pop_listint - delete the head node
 * @head: head node
 * Return: int
 */
int pop_listint(listint_t **head)
{
	listint_t *list;
	int first_node;

	if (*head == NULL)
		return (0);
	first_node = (*head)->n;
	list = *head;
	*head = (*head)->next;
	free(list);
	return (first_node);
}
