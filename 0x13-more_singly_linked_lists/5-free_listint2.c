#include "lists.h"
/**
 * free_listint2 - free link list
 * @head: head of list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
	*head = NULL;
}
