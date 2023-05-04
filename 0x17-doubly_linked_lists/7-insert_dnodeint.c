#include "lists.h"
/**
 * insert_dnodeint_at_index - Inserts a new node at a given position in a dlistint_t list.
 * @h: Pointer to the head node of the list.
 * @idx: The index of the node before which the new node should be inserted (starting from 0).
 * @n: The value of the n field of the new node.
 *
 * Return: Pointer to the new node on success, or NULL on failure.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
    unsigned int count = 0;
    dlistint_t *current = *h;
    dlistint_t *new_node = malloc(sizeof(dlistint_t));

    if (new_node == NULL)
    {
        return (NULL);
    }

    new_node->n = n;
    new_node->prev = NULL;
    new_node->next = NULL;

    if (*h == NULL)
    {
        *h = new_node;
        return (new_node);
    }

    if (idx == 0)
    {
        new_node->next = *h;
        (*h)->prev = new_node;
        *h = new_node;
        return (new_node);
    }

    while (current != NULL)
    {
        if (count == idx)
        {
            new_node->prev = current->prev;
            new_node->next = current;
            current->prev->next = new_node;
            current->prev = new_node;
            return (new_node);
        }
        count++;
        current = current->next;
    }

    free(new_node);
    return (NULL);
}
