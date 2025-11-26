#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - prints all the elements of a dlistint_t list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: the number of nodes in the list
 *
 * Description: traverses the list from head to tail,
 *              prints each node's integer value followed by a newline,
 *              and counts the total number of nodes.
 */


size_t print_dlistint(const dlistint_t *h)
{
int count = 0;

	while (h->n != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count += 1;
	}
return (count);
}
