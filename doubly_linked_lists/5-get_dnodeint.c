#include "lists.h"
/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 * @index: index of the node, starting from 0
 *
 * Return: pointer to the node at the specified index,
 *         or NULL if the node does not exist
 *
 * Description: traverses the list from head to tail,
 *              counts nodes until reaching the given index,
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index; i++)
	{
		if (ptr != NULL)
		ptr = ptr->next;
	}
	return (ptr);
}
