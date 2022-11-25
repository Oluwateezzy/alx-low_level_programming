#include "lists.h"
/**
 * add_node_end - adds a new node at the beginning of a list
 * @head: head parameter
 * @str: char pointer str
 * Return: list_t
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *last_node;
	size_t i;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	new_node->len = i;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = new_node;
	}
	return (*head);
}
