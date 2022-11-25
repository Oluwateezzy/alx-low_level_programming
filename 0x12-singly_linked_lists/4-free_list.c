#include "lists.h"
/**
 * free_list - free linked list
 * @head: list parameter
 * Return: void
 */
void free_list(list_t *head)
{
	while (*head)
	{
		free(head->str);
		free(head->len);
		head = head->next;
	}
	free(head);
}
