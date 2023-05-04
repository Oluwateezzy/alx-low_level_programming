#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: index of node
 * @index: index of node
 * Return: int
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	size_t count = 0;
	dlistint_t *current = *head;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
		{
			(*head)->prev =  NULL;
		}
		free(current);
		return (1);
	}

	while (current != NULL)
	{
		if (count ==  index)
		{
			current->prev->next = current->next;
			if (current->next != NULL)
			{
				current->next->prev =  current->prev;
			}
			free(current);
			return (1);
		}
		count++;
		current = current->next;
	}
	return (-1);
}
