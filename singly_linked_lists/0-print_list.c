#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to the first node of the linked list
 *
 * Description: Each node's string and length is printed.
 * If the string is NULL, prints [0] (nil) instead.
 * Return: the number of nodes in*
*/
size_t print_list(const list_t *h)
{
	int i;
	int count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		else
		{
		printf("[%u] %s\n", h->len, h->str);
		}
		count += 1;
		h = h->next;
	}
	return (count);
}
