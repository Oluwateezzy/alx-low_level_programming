#include "lists.h"
/**
 * get_nodeint_at_index - get node at exact index
 * @head: head node
 * @index: node
 * Return: structure
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/**
	 * listint_t *node;
	 */
	unsigned int i;

	i = 0;
	while (head)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}
