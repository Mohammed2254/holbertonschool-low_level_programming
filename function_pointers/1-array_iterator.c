#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - do an action to every element
 * @array: the array that we want to do an action to it
 * @size: the lengrt hof the array
 * @action: the action that will be done
 * Description: do
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

	}
}
