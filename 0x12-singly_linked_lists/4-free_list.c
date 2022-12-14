#include "lists.h"
/**
 * free_list - free linked list
 * @head: list parameter
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
