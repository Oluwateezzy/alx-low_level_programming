#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list
 * @h: linked list parameter
 * Return: unsigned int
 */
size_t list_len(const list_t *h)
{
	size_t nelem;

	nelem = 0;
	while (h != NULL)
	{
		if (h->str != NULL)
			nelem++;
		h = h->next;
	}
	return (nelem);
}
