#include "lists.h"
/**
 * add_dnodeint - adds a new node at the beginning of a dlistint_t list
 * @head: double pointer to the head of the doubly linked list
 * @n: integer to store in the new node
 *
 * Return: pointer to the new node, or NULL if memory allocation fails
 *
 * Description: allocates a new node, sets its value to n,
 *              inserts it at the start of the list,
 *              updates the previous head's prev pointer if it exists,
 *              and updates the head of the list to point to the new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL || head == NULL)
		return (NULL);

			new->prev = NULL;
			new->n = n;
			new->next = *head;
			if (*head != NULL)
				(*head)->prev = new;
			*head = new;
			return (new);
}
