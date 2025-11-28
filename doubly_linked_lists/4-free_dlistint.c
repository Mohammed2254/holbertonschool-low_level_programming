#include "lists.h"
/**
 * free_dlistint - frees a doubly linked list
 * @head: pointer to the head of the list
 *
 * Description: frees each node in the list one by one.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;
	dlistint_t *tmp = head;

	if (head == NULL)
		return;

	while (ptr != NULL)
	{
		tmp = tmp->next;
		free(ptr);
		ptr = tmp;
	}


}
