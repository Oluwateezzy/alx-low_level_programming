#include "lists.h"
/**
 * add_node - adds a new node at the beginning of a list
 * @head: head parameter
 * @str: char pointer str
 * Return: list_t
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int i;

	new_node = malloc(sizeof(list_t));
	if (new_node != NULL)
		return ('\0');
	new_node->str = strdup(str);
	for (i = 0; str[i]; i++)
		;
	new_node->len = i;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
