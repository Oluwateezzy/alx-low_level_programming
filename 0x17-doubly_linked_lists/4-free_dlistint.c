#include "lists.h"
/**
 * free_dlistint - free a double linked list
 * @head: list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
