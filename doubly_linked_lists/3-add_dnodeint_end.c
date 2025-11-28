#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: value to store in the new node
 *
 * Return: the address of the new element, or NULL on failure
 *
 * Description: This function creates a new node and appends it to the
 * end of a doubly linked list. If the list is empty, the new node
 * becomes the head. Otherwise, the function traverses the list to the
 * last node and links the new node after it.
 */

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
