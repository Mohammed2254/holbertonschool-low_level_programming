#include "lists.h"
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->prev = NULL;
		new->n = n;
		new->next = NULL;
		*head = new;
		return (new);
	}
	while (ptr != NULL)
	{
		if (ptr->next == NULL)
		{
			ptr->next = new;
			new->prev = ptr;
			new->n = n;
			new->next = NULL;
			return (new);
		}
		ptr = ptr->next;
	}
return (NULL);
}
