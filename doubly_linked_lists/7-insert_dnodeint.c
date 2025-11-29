#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node at a given index
 * @h: pointer to head pointer
 * @idx: index position
 * @n: value to insert
 *
 * Return: address of new node, or NULL on failure
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new;
dlistint_t *ptr = *h;
unsigned int i = 0;

if (idx == 0)
return (add_dnodeint(h, n));

while (ptr != NULL && i < idx)
{
ptr = ptr->next;
i++;
}

if (i != idx)
return (NULL);

if (ptr == NULL)
return (add_dnodeint_end(h, n));

new = malloc(sizeof(dlistint_t));
if (new == NULL)
return (NULL);

new->n = n;
new->prev = ptr->prev;
new->next = ptr;

ptr->prev->next = new;
ptr->prev = new;

return (new);
}

