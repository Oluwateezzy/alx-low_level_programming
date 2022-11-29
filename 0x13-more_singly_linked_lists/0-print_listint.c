#include "lists.h"
/**
 * print_listint - print all the elements
 * @h: a listint
 * Return: size_t
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}
