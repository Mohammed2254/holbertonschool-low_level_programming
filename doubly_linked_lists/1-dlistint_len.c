#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a dlistint_t list
 * @h: pointer to the head of the doubly linked list
 *
 * Return: number of nodes in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;
const dlistint_t *ptr = h;
	while (ptr != NULL)
	{
			count++;
		ptr = ptr->next;
	}

return (count);
}
