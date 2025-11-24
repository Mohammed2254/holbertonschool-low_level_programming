#include "lists.h"
/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the first node of the linked list
 *
 * Description: Traverses the linked list and counts each node.
 *
 * Return: the total number of nodes in the list
 */

size_t list_len(const list_t *h)
{
int count = 0;


	while (h != NULL)
	{
		count += 1;
		h = h->next;
	}
return (count);
}
