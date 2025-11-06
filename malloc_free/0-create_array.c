#include "main.h"
#include <stdlib.h>
/**
* create_array - f chars and initializes it with a specific char
* @size: The size of the array
* @c: The character to fill the array with
*
* Return: Pointer to the created array, or NULL if size = 0 or if malloc fails
*/
char *create_array(unsigned int size, char c)
{
if (size == 0)
return (NULL);
char *arr = malloc(sizeof(char) * size);
if (arr == NULL)
return (NULL);

int i = 0;

for (; i < size; i++)
arr[i] = c;

return (arr);
}
