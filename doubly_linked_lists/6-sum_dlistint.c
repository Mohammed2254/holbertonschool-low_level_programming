#include "lists.h"
/**
 * sum_dlistint - returns the sum of all the data (n) of a dlistint_t list
 * @head: pointer to the head of the doubly linked list
 *
 * Return: sum of all integer values in the list
 *
 * Description: traverses the list from head to tail,
 *              adds each node's n value to a running total,
 *              and returns the total sum.
 */

int sum_dlistint(dlistint_t *head)
{
dlistint_t *ptr = head;
int sum = 0;

	if (head == NULL)
		return (sum);


	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
return (sum);
}
