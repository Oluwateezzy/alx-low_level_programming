#include "lists.h"
/**
 * sum_listint - print the sum of a list
 * @head: list
 * Return: int
 */
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);
	sum = 0;
	while (head)
	{
		sum = sum + head->n;
		head = head->next;
	}
	return (sum);
}
