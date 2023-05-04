#include "lists.h"
/**
 * insert_dnodeint_at_index - Insert node at a given position inlist.
 * @h: Pointer to the head node of the list.
 * @idx: The index of the node
 * @n: The value of the n field of the new node.
 *
 * Return: Pointer to the new node on success, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *current;
	dlistint_t *new_node;

	new_node =  NULL;

	if (idx ==  0)
		new_node = add_dnodeint(h, n);
	else
	{
		current = *h;
		count = 1;
		if (current != NULL)
		{
			while (current->prev != NULL)
				current = current->prev;
		}
		while (current != NULL)
		{
			if (count == idx)
			{
				if (current->next == NULL)
					new_node = add_dnodeint_end(h, n);
				else
				{
					new_node = malloc(sizeof(dlistint_t));
					if (new_node != NULL)
					{
						new_node->n = n;
						new_node->next = current->next;
						new_node->prev = current;
						current->next->prev = new_node;
						current->next = new_node;
					}
				}
				break;
			}
			current = current->next;
			count++;
		}
	}
	return (new_node);
}
