#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - creates a 2D array of integers
* @width: number of columns
* @height: number of rows
*
* Return: pointer to the allocated 2D array, or NULL on failure
* Each element of the grid is initialized to 0
* If width or height is 0 or negative, returns NULL
*/
int **alloc_grid(int width, int height)
{
int i;
int **array = NULL;
int j;
	if (width <= 0 || height <= 0)
	return (NULL);

	array = malloc(sizeof(int *) * height);
	if (array == NULL)
	return (NULL);
		for (i = 0; i < height; i++)
		{
			array[i] = malloc(sizeof(int) * width);
			if (array[i] == NULL)
			{
				for (j = 0; j < i; j++)
				{
				free(array[j]);
				}
			free(array);
			return (NULL);
			}
		}
		i = 0;
			while (i < height)
			{

				for (j = 0; j < width; j++)
				array[i][j] = 0;
				i++;
			}
return (array);
}
