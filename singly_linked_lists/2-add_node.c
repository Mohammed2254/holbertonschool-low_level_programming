#include "lists.h"
#include <stdlib.h>
/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: double pointer to the head of the linked list
 * @str: string to be duplicated and added to the new node
 *
 * Return: pointer to the new node, or NULL if memory allocation fails
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new = malloc(sizeof(list_t));
int i = 0;

	if (new == NULL)
	{
		free(new);
		return (NULL);
	}

	while (str[i] != '\0')
		i++;

new->str = strdup(str);

if (new->str == NULL)
{
	free(new);
	return (NULL);
}

new->len = i;
new->next = *head;
*head = new;

return (new);

}
