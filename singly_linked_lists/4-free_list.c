#include "lists.h"
/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the linked list
 *
 * Description: traverses the linked list and frees each node's memory,
 *              including the string stored in each node.
 */

void free_list(list_t *head)
{
	list_t *ptr = head;
	list_t *temp = NULL;

	while (ptr != NULL)
	{
		temp = ptr->next;
		free(ptr);
		if (temp == NULL)
			return;
			ptr = temp;
	}

}
