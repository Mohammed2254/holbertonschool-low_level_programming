#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to head pointer
 * @idx: index where new node should be inserted
 * @n: value to store in the new node
 *
 * Return: address of the new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *ptr = *h;
unsigned int i = 0;
dlistint_t *new = NULL;

if (idx == 0)
{
return (add_dnodeint(h, n));
}

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

while (ptr != NULL)
{
if (i == idx)
{
new->prev = ptr->prev;
new->next = ptr;

if (ptr->prev != NULL)
ptr->prev->next = new;
else
*h = new;

ptr->prev = new;
new->n = n;
return (new);
}
ptr = ptr->next;
i++;
}

return (add_dnodeint_end(h, n));
}

