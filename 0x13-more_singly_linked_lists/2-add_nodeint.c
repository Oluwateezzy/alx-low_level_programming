#include "lists.h"
/**
 * add_nodeint - add new node to linked list
 * @head: head of list
 * @n: value to be added
 * Return: listint_t
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t new_node;

	node_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->next = *head;
	new_node->n = n;
	*head = new_node;
	return (new_node);
}
