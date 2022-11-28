#include "lists.h"
/**
 * print_listint - print all the elements
 * @h: a listint
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);
	i = 0;
	while (h)
	{
		printf("%d", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
