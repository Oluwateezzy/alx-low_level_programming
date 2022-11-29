#include "lists.h"
/**
 * listint_len - return the len of a linked list
 * @h: list
 * Return: size_t
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
