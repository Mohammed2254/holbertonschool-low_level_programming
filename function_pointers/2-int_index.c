#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - Searches for an integer in an array using a comparison function
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @cmp: Pointer to the function used to compare values
 *
 * Return: The index of the first element for which cmp does not return 0,
 *         or -1 if no element matches, if size <= 0, or if array/cmp is NULL
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
if (array == NULL || cmp == NULL)
	return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
return (-1);
}
