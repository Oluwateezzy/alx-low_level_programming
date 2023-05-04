#include "lists.h"
/**
 * dlistint_len - length og double linkedlist
 * @h: list head
 * Return: size_t
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;
	const dlistint_t *current = h;

	while (current)
	{
		len++;
		current = current->next;
	}
	return (len);
}
