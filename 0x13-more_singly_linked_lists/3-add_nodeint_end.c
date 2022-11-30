#include "lists.h"
/**
 * add_nodeint_end - add node to the end of list
 * @head: head of list
 * @n: value
 * Return: structure
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	while (*head)
	{
		*head = (*head)->next;
	}
	new_node->n = n;
	new_node->next = NULL;
	(*head)->next = new_node;
	return (*head);
}
